/********************************************************************************
** Form generated from reading UI file 'qttestbed.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTTESTBED_H
#define UI_QTTESTBED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtTestbedClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_TestCompression;
    QPushButton *pushButton_Reload;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_Buttons;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QCheckBox *checkBox;
    QGroupBox *groupBox_InputWidgets;
    QVBoxLayout *verticalLayout_3;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout;
    QSlider *horizontalSlider;
    QSlider *verticalSlider;
    QGroupBox *groupBox_ItemWidgets;
    QVBoxLayout *verticalLayout_4;
    QListWidget *listWidget;
    QTreeWidget *treeWidget;
    QTableWidget *tableWidget;
    QGroupBox *groupBox_DisplayWidgets;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_2;
    QFrame *line;
    QFrame *line_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtTestbedClass)
    {
        if (QtTestbedClass->objectName().isEmpty())
            QtTestbedClass->setObjectName(QStringLiteral("QtTestbedClass"));
        QtTestbedClass->resize(689, 513);
        centralWidget = new QWidget(QtTestbedClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_TestCompression = new QPushButton(centralWidget);
        pushButton_TestCompression->setObjectName(QStringLiteral("pushButton_TestCompression"));

        verticalLayout->addWidget(pushButton_TestCompression);

        pushButton_Reload = new QPushButton(centralWidget);
        pushButton_Reload->setObjectName(QStringLiteral("pushButton_Reload"));

        verticalLayout->addWidget(pushButton_Reload);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 669, 382));
        horizontalLayout_3 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox_Buttons = new QGroupBox(scrollAreaWidgetContents);
        groupBox_Buttons->setObjectName(QStringLiteral("groupBox_Buttons"));
        verticalLayout_2 = new QVBoxLayout(groupBox_Buttons);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton = new QPushButton(groupBox_Buttons);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        radioButton = new QRadioButton(groupBox_Buttons);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        verticalLayout_2->addWidget(radioButton);

        checkBox = new QCheckBox(groupBox_Buttons);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout_2->addWidget(checkBox);


        horizontalLayout_3->addWidget(groupBox_Buttons);

        groupBox_InputWidgets = new QGroupBox(scrollAreaWidgetContents);
        groupBox_InputWidgets->setObjectName(QStringLiteral("groupBox_InputWidgets"));
        verticalLayout_3 = new QVBoxLayout(groupBox_InputWidgets);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        comboBox = new QComboBox(groupBox_InputWidgets);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_3->addWidget(comboBox);

        lineEdit = new QLineEdit(groupBox_InputWidgets);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_3->addWidget(lineEdit);

        textEdit = new QTextEdit(groupBox_InputWidgets);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_3->addWidget(textEdit);

        spinBox = new QSpinBox(groupBox_InputWidgets);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        verticalLayout_3->addWidget(spinBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSlider = new QSlider(groupBox_InputWidgets);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        verticalSlider = new QSlider(groupBox_InputWidgets);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSlider);


        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_3->addWidget(groupBox_InputWidgets);

        groupBox_ItemWidgets = new QGroupBox(scrollAreaWidgetContents);
        groupBox_ItemWidgets->setObjectName(QStringLiteral("groupBox_ItemWidgets"));
        verticalLayout_4 = new QVBoxLayout(groupBox_ItemWidgets);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        listWidget = new QListWidget(groupBox_ItemWidgets);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout_4->addWidget(listWidget);

        treeWidget = new QTreeWidget(groupBox_ItemWidgets);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        verticalLayout_4->addWidget(treeWidget);

        tableWidget = new QTableWidget(groupBox_ItemWidgets);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout_4->addWidget(tableWidget);


        horizontalLayout_3->addWidget(groupBox_ItemWidgets);

        groupBox_DisplayWidgets = new QGroupBox(scrollAreaWidgetContents);
        groupBox_DisplayWidgets->setObjectName(QStringLiteral("groupBox_DisplayWidgets"));
        verticalLayout_5 = new QVBoxLayout(groupBox_DisplayWidgets);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label = new QLabel(groupBox_DisplayWidgets);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_5->addWidget(label);

        progressBar = new QProgressBar(groupBox_DisplayWidgets);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        verticalLayout_5->addWidget(progressBar);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, 5);
        line = new QFrame(groupBox_DisplayWidgets);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        line_2 = new QFrame(groupBox_DisplayWidgets);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);


        verticalLayout_5->addLayout(horizontalLayout_2);


        horizontalLayout_3->addWidget(groupBox_DisplayWidgets);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        QtTestbedClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtTestbedClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 689, 21));
        QtTestbedClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtTestbedClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtTestbedClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtTestbedClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtTestbedClass->setStatusBar(statusBar);

        retranslateUi(QtTestbedClass);

        QMetaObject::connectSlotsByName(QtTestbedClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtTestbedClass)
    {
        QtTestbedClass->setWindowTitle(QApplication::translate("QtTestbedClass", "QtTestbed", 0));
        pushButton_TestCompression->setText(QApplication::translate("QtTestbedClass", "Compression/Uncompression", 0));
        pushButton_Reload->setText(QApplication::translate("QtTestbedClass", "Reload", 0));
        groupBox_Buttons->setTitle(QApplication::translate("QtTestbedClass", "Buttons", 0));
        pushButton->setText(QApplication::translate("QtTestbedClass", "PushButton", 0));
        radioButton->setText(QApplication::translate("QtTestbedClass", "RadioButton", 0));
        checkBox->setText(QApplication::translate("QtTestbedClass", "CheckBox", 0));
        groupBox_InputWidgets->setTitle(QApplication::translate("QtTestbedClass", "Input Widgets", 0));
        groupBox_ItemWidgets->setTitle(QApplication::translate("QtTestbedClass", "Item Widgets", 0));
        groupBox_DisplayWidgets->setTitle(QApplication::translate("QtTestbedClass", "DisplayWidgets", 0));
        label->setText(QApplication::translate("QtTestbedClass", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class QtTestbedClass: public Ui_QtTestbedClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTESTBED_H
