#ifndef TEXT_RECOGNIZER_H
#define TEXT_RECOGNIZER_H

#include <QtWidgets/QMainWindow>
#include "ui_text_recognizer.h"

class TextRecognizer : public QMainWindow
{
	Q_OBJECT

public:
	TextRecognizer(QWidget *parent = 0);
	~TextRecognizer();

private:
	Ui::TextRecognizerClass ui;
};

#endif // TEXT_RECOGNIZER_H
