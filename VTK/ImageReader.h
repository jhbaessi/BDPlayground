#ifndef IMAGE_READER_H
#define IMAGE_READER_H


#include "vtkImageReslice.h"
#include "vtkSmartPointer.h"


namespace BDVtk
{

class ImageReader
{
public:
	ImageReader(const std::string &filename);
	~ImageReader();

	vtkSmartPointer<vtkImageReslice> ReadImage();

private:
	std::string filename_;
};

}


#endif // IMAGE_READER_H