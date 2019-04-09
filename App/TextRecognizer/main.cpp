#include "text_recognizer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TextRecognizer w;
	w.show();
	return a.exec();
}
