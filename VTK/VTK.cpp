// VTK.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "vtkAutoInit.h" 
VTK_MODULE_INIT(vtkRenderingOpenGL2); // VTK was built with vtkRenderingOpenGL2
VTK_MODULE_INIT(vtkInteractionStyle);

#include "vtkInteractorStyleImage.h"
#include "vtkNIFTIImageReader.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkSmartPointer.h"

int main(int argc, char *argv[])
{


	vtkSmartPointer<vtkInteractorStyleImage> interactor_style = vtkSmartPointer<vtkInteractorStyleImage>::New();
	interactor_style->SetInteractionModeToImage3D();

	vtkSmartPointer<vtkRenderWindow> render_window = vtkSmartPointer<vtkRenderWindow>::New();
	
	vtkSmartPointer<vtkRenderWindowInteractor> interactor = vtkSmartPointer<vtkRenderWindowInteractor>::New();
	interactor->SetRenderWindow(render_window);
	interactor->SetInteractorStyle(interactor_style);

	vtkSmartPointer<vtkNIFTIImageReader> nifti_reader = vtkSmartPointer<vtkNIFTIImageReader>::New();
	nifti_reader

	return EXIT_SUCCESS;
}