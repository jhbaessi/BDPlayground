#pragma comment(linker, "/entry:WinMainCRTStartup /subsystem:console")

#include "qttestbed.h"

#include <QDebug>

#include <QLayout>
#include <QPushButton>
#include <QLabel>
#include <QFile>
#include <QSpinBox>
#include <QResource>
#include <QXmlStreamWriter>
#include <QDoubleSpinBox>

#define PATH_STYLESHEET "D:\\devel\\Playground\\QtPlayground\\Resources\\stylesheet.qss"

#define	PATH_XML	"D:\\devel\\QtTestbed\\QtTestbed\\Resources\\xml_test.xml"

QtTestbed::QtTestbed(QWidget *parent)
	: QMainWindow(parent)
{
	//QResource::registerResource(QCoreApplication::applicationDirPath() + "/res.rcc");
	UpdateStylesheet();

	SetupUi();
}

QtTestbed::~QtTestbed()
{
	
}

//#define TOOLTIP_CONTENT "Tooltip1 Tooltip2 Tooltip3 Tooltip4 Tooltip5 Tooltip6 Tooltip7 Tooltip8 Tooltip9"
#define TOOLTIP_CONTENT "Currently, only stroke segmentation is possible. Other labels will be updated at a later date."

void QtTestbed::SetupUi()
{
	ui.setupUi(this);

	connect(ui.pushButton_Reload, SIGNAL(clicked()), this, SLOT(UpdateStylesheet()));

	ui.pushButton->setObjectName("button");
	
#if 0
	// add widgets
	QVBoxLayout *pMainLayout = new QVBoxLayout;

	QPushButton *pUpdateStylesheetButton = new QPushButton("Update stylesheet");
	connect(pUpdateStylesheetButton, SIGNAL(clicked()), this, SLOT(UpdateStylesheet()));

	pMainLayout->addWidget(pUpdateStylesheetButton);

	// tooltip
	QLabel *pTooltipTestLabel = new QLabel;
	pTooltipTestLabel->setFixedSize(10, 10);
	pTooltipTestLabel->setObjectName("image-info");
	pTooltipTestLabel->setToolTip(QString("<span>%1</span>").arg(TOOLTIP_CONTENT));
	//pTooltipTestLabel->setToolTip(QString("<span style=\"font-size:10px\">%1</span>").arg(TOOLTIP_CONTENT));
	//pTooltipTestLabel->setToolTip(QString("%1").arg(TOOLTIP_CONTENT));

	pMainLayout->addWidget(pTooltipTestLabel);

	// spinbox
	QSpinBox *pSpinBox = new QSpinBox;
	pSpinBox->setAlignment(Qt::AlignCenter);
	pMainLayout->addWidget(pSpinBox);

	// draw in QLabel
	QLabel *pDrawingLabel = new QLabel("Draing Label");
	pDrawingLabel->setFixedSize(50, 50);

	QPixmap drawingPixmap(50,50);
	drawingPixmap.fill(Qt::red);

	pDrawingLabel->setPixmap(drawingPixmap);

	pMainLayout->addWidget(pDrawingLabel);

	// xml reader & writer
	QPushButton *pGenerateXML = new QPushButton;
	connect(pGenerateXML, SIGNAL(clicked()), this, SLOT(GenerateXML()));

	pMainLayout->addWidget(pGenerateXML);

	// spin box
	QDoubleSpinBox *pDoubleSpinBox = new QDoubleSpinBox;
	pDoubleSpinBox->setRange(0.f, 1.f);
	pDoubleSpinBox->setDecimals(3);
	//pDoubleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
	pDoubleSpinBox->setAlignment(Qt::AlignCenter);

	pMainLayout->addWidget(pDoubleSpinBox);

	//
	ui.centralWidget->setLayout(pMainLayout);
#endif
	// set style sheet
	UpdateStylesheet();
}

void QtTestbed::UpdateStylesheet()
{
	// set style sheet
	QFile stylesheet(PATH_STYLESHEET);
	stylesheet.open(QFile::ReadOnly);
	QString strStylesheet = stylesheet.readAll();
	qApp->setStyleSheet(strStylesheet);
}

void QtTestbed::GenerateXML()
{
	QFile file(PATH_XML);
	file.open(QIODevice::WriteOnly);
		
	QXmlStreamWriter xmlWriter(&file);
	xmlWriter.setAutoFormatting(true);
	xmlWriter.writeStartDocument();		// write the XML version number and the encoding information.

	xmlWriter.writeStartElement("Element1");
	xmlWriter.writeAttribute("attribute1", "value1");
	xmlWriter.writeAttribute("attribute2", "value2");
	{
		xmlWriter.writeTextElement("Element2", "value");
		
		xmlWriter.writeStartElement("Element3");
		xmlWriter.writeEndElement();
	}
	xmlWriter.writeEndElement();

	xmlWriter.writeEndDocument();

	if (xmlWriter.hasError())
	{
		qDebug() << "Error detected.";
	}

	file.close();
}