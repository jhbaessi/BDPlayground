#include "stdafx.h"
#include "ImageReader.h"

#include "vtkErrorCode.h"
#include "vtkNIFTIImageReader.h"
#include "vtkMatrix4x4.h"


using namespace std;
using namespace BDVtk;


ImageReader::ImageReader(const string &filename)
	: filename_(filename)
{
	
}

ImageReader::~ImageReader()
{
}

vtkSmartPointer<vtkImageReslice> ImageReader::ReadImage()
{
	vtkSmartPointer<vtkNIFTIImageReader> nifti_reader = vtkSmartPointer<vtkNIFTIImageReader>::New();
	nifti_reader->SetFileName(filename_.c_str());
	nifti_reader->Update();

	if (nifti_reader->GetErrorCode() != vtkErrorCode::NoError)
	{
		printf("Failed to read a NIFTI file: %s\n", filename_.c_str());
		return false;
	}

	vtkSmartPointer<vtkMatrix4x4> matrix = vtkSmartPointer<vtkMatrix4x4>::New();
	if (nifti_reader->GetQFormMatrix())
	{
		matrix->DeepCopy(nifti_reader->GetQFormMatrix());
		matrix->Invert();
	}
	else if (nifti_reader->GetSFormMatrix())
	{
		matrix->DeepCopy(nifti_reader->GetSFormMatrix());
		matrix->Invert();
	}

	vtkSmartPointer<vtkImageReslice> image_reslice = vtkSmartPointer<vtkImageReslice>::New();
	image_reslice->SetInputConnection(nifti_reader->GetOutputPort());
	image_reslice->SetResliceAxes(matrix);
	image_reslice->SetInterpolationModeToLinear();
	image_reslice->Update();

	return image_reslice;
}