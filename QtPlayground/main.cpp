#include "qttestbed.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtTestbed w;
	w.show();
	return a.exec();
}
