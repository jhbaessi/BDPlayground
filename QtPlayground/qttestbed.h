#ifndef QTTESTBED_H
#define QTTESTBED_H

#include <QtWidgets/QMainWindow>
#include "ui_qttestbed.h"

class QtTestbed : public QMainWindow
{
	Q_OBJECT

public:
	QtTestbed(QWidget *parent = 0);
	~QtTestbed();

protected:
	void SetupUi();

private:
	Ui::QtTestbedClass ui;

public Q_SLOTS:
	void UpdateStylesheet();

	void GenerateXML();
};

#endif // QTTESTBED_H
