/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *input1Layout;
    QLabel *input1MasterLabel;
    QLabel *input1BinaryLabel;
    QLabel *input1BinaryDisplay;
    QLabel *input1DecimalLabel;
    QLabel *input1DecimalDisplay;
    QLabel *input1HexLabel;
    QLabel *input1HexDisplay;
    QLabel *input1SEMLabel;
    QLabel *input1SEMDisplay;
    QPlainTextEdit *input1PlainTextEdit;
    QVBoxLayout *verticalLayout;
    QComboBox *input1FormatSelector;
    QPushButton *input1SubmitButton;
    QLabel *input1ErrorDisplay;
    QWidget *formLayoutWidget_2;
    QFormLayout *input2Layout;
    QLabel *input2MasterLabel;
    QLabel *input2BinaryLabel;
    QLabel *input2BinaryDisplay;
    QLabel *input2DecimalLabel;
    QLabel *input2DecimalDisplay;
    QLabel *input2HexLabel;
    QLabel *input2HexDisplay;
    QLabel *input2SEMLabel;
    QLabel *input2SEMDisplay;
    QLabel *input2ErrorDisplay;
    QPlainTextEdit *input2PlainTextEdit;
    QVBoxLayout *verticalLayout_2;
    QComboBox *input2FormatSelector;
    QPushButton *input2SubmitButton;
    QWidget *formLayoutWidget_3;
    QFormLayout *outputLayout;
    QLabel *outputMasterLabel;
    QLabel *outputErrorDisplay;
    QLabel *outputBinaryLabel;
    QLabel *outputBinaryDisplay;
    QLabel *outputDecimalLabel;
    QLabel *outputDecimalDisplay;
    QLabel *outputHexLabel;
    QLabel *outputHexDisplay;
    QLabel *outputSEMLabel;
    QLabel *outputSEMDisplay;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *operationLayout;
    QLabel *operationLabel;
    QComboBox *operationSelectorComboBox;
    QPushButton *operationSubmitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1312, 758);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 10, 421, 204));
        input1Layout = new QFormLayout(formLayoutWidget);
        input1Layout->setObjectName("input1Layout");
        input1Layout->setContentsMargins(0, 0, 0, 0);
        input1MasterLabel = new QLabel(formLayoutWidget);
        input1MasterLabel->setObjectName("input1MasterLabel");

        input1Layout->setWidget(0, QFormLayout::ItemRole::LabelRole, input1MasterLabel);

        input1BinaryLabel = new QLabel(formLayoutWidget);
        input1BinaryLabel->setObjectName("input1BinaryLabel");

        input1Layout->setWidget(2, QFormLayout::ItemRole::LabelRole, input1BinaryLabel);

        input1BinaryDisplay = new QLabel(formLayoutWidget);
        input1BinaryDisplay->setObjectName("input1BinaryDisplay");

        input1Layout->setWidget(2, QFormLayout::ItemRole::FieldRole, input1BinaryDisplay);

        input1DecimalLabel = new QLabel(formLayoutWidget);
        input1DecimalLabel->setObjectName("input1DecimalLabel");

        input1Layout->setWidget(3, QFormLayout::ItemRole::LabelRole, input1DecimalLabel);

        input1DecimalDisplay = new QLabel(formLayoutWidget);
        input1DecimalDisplay->setObjectName("input1DecimalDisplay");

        input1Layout->setWidget(3, QFormLayout::ItemRole::FieldRole, input1DecimalDisplay);

        input1HexLabel = new QLabel(formLayoutWidget);
        input1HexLabel->setObjectName("input1HexLabel");

        input1Layout->setWidget(4, QFormLayout::ItemRole::LabelRole, input1HexLabel);

        input1HexDisplay = new QLabel(formLayoutWidget);
        input1HexDisplay->setObjectName("input1HexDisplay");

        input1Layout->setWidget(4, QFormLayout::ItemRole::FieldRole, input1HexDisplay);

        input1SEMLabel = new QLabel(formLayoutWidget);
        input1SEMLabel->setObjectName("input1SEMLabel");

        input1Layout->setWidget(5, QFormLayout::ItemRole::LabelRole, input1SEMLabel);

        input1SEMDisplay = new QLabel(formLayoutWidget);
        input1SEMDisplay->setObjectName("input1SEMDisplay");

        input1Layout->setWidget(5, QFormLayout::ItemRole::FieldRole, input1SEMDisplay);

        input1PlainTextEdit = new QPlainTextEdit(formLayoutWidget);
        input1PlainTextEdit->setObjectName("input1PlainTextEdit");

        input1Layout->setWidget(1, QFormLayout::ItemRole::FieldRole, input1PlainTextEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        input1FormatSelector = new QComboBox(formLayoutWidget);
        input1FormatSelector->addItem(QString());
        input1FormatSelector->addItem(QString());
        input1FormatSelector->addItem(QString());
        input1FormatSelector->addItem(QString());
        input1FormatSelector->setObjectName("input1FormatSelector");

        verticalLayout->addWidget(input1FormatSelector);

        input1SubmitButton = new QPushButton(formLayoutWidget);
        input1SubmitButton->setObjectName("input1SubmitButton");

        verticalLayout->addWidget(input1SubmitButton);


        input1Layout->setLayout(1, QFormLayout::ItemRole::LabelRole, verticalLayout);

        input1ErrorDisplay = new QLabel(formLayoutWidget);
        input1ErrorDisplay->setObjectName("input1ErrorDisplay");

        input1Layout->setWidget(0, QFormLayout::ItemRole::FieldRole, input1ErrorDisplay);

        formLayoutWidget_2 = new QWidget(centralwidget);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(450, 10, 441, 204));
        input2Layout = new QFormLayout(formLayoutWidget_2);
        input2Layout->setObjectName("input2Layout");
        input2Layout->setContentsMargins(0, 0, 0, 0);
        input2MasterLabel = new QLabel(formLayoutWidget_2);
        input2MasterLabel->setObjectName("input2MasterLabel");

        input2Layout->setWidget(0, QFormLayout::ItemRole::LabelRole, input2MasterLabel);

        input2BinaryLabel = new QLabel(formLayoutWidget_2);
        input2BinaryLabel->setObjectName("input2BinaryLabel");

        input2Layout->setWidget(2, QFormLayout::ItemRole::LabelRole, input2BinaryLabel);

        input2BinaryDisplay = new QLabel(formLayoutWidget_2);
        input2BinaryDisplay->setObjectName("input2BinaryDisplay");

        input2Layout->setWidget(2, QFormLayout::ItemRole::FieldRole, input2BinaryDisplay);

        input2DecimalLabel = new QLabel(formLayoutWidget_2);
        input2DecimalLabel->setObjectName("input2DecimalLabel");

        input2Layout->setWidget(3, QFormLayout::ItemRole::LabelRole, input2DecimalLabel);

        input2DecimalDisplay = new QLabel(formLayoutWidget_2);
        input2DecimalDisplay->setObjectName("input2DecimalDisplay");

        input2Layout->setWidget(3, QFormLayout::ItemRole::FieldRole, input2DecimalDisplay);

        input2HexLabel = new QLabel(formLayoutWidget_2);
        input2HexLabel->setObjectName("input2HexLabel");

        input2Layout->setWidget(4, QFormLayout::ItemRole::LabelRole, input2HexLabel);

        input2HexDisplay = new QLabel(formLayoutWidget_2);
        input2HexDisplay->setObjectName("input2HexDisplay");

        input2Layout->setWidget(4, QFormLayout::ItemRole::FieldRole, input2HexDisplay);

        input2SEMLabel = new QLabel(formLayoutWidget_2);
        input2SEMLabel->setObjectName("input2SEMLabel");

        input2Layout->setWidget(5, QFormLayout::ItemRole::LabelRole, input2SEMLabel);

        input2SEMDisplay = new QLabel(formLayoutWidget_2);
        input2SEMDisplay->setObjectName("input2SEMDisplay");

        input2Layout->setWidget(5, QFormLayout::ItemRole::FieldRole, input2SEMDisplay);

        input2ErrorDisplay = new QLabel(formLayoutWidget_2);
        input2ErrorDisplay->setObjectName("input2ErrorDisplay");

        input2Layout->setWidget(0, QFormLayout::ItemRole::FieldRole, input2ErrorDisplay);

        input2PlainTextEdit = new QPlainTextEdit(formLayoutWidget_2);
        input2PlainTextEdit->setObjectName("input2PlainTextEdit");

        input2Layout->setWidget(1, QFormLayout::ItemRole::FieldRole, input2PlainTextEdit);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        input2FormatSelector = new QComboBox(formLayoutWidget_2);
        input2FormatSelector->addItem(QString());
        input2FormatSelector->addItem(QString());
        input2FormatSelector->addItem(QString());
        input2FormatSelector->addItem(QString());
        input2FormatSelector->setObjectName("input2FormatSelector");

        verticalLayout_2->addWidget(input2FormatSelector);

        input2SubmitButton = new QPushButton(formLayoutWidget_2);
        input2SubmitButton->setObjectName("input2SubmitButton");

        verticalLayout_2->addWidget(input2SubmitButton);


        input2Layout->setLayout(1, QFormLayout::ItemRole::LabelRole, verticalLayout_2);

        formLayoutWidget_3 = new QWidget(centralwidget);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(450, 230, 441, 111));
        outputLayout = new QFormLayout(formLayoutWidget_3);
        outputLayout->setObjectName("outputLayout");
        outputLayout->setContentsMargins(0, 0, 0, 0);
        outputMasterLabel = new QLabel(formLayoutWidget_3);
        outputMasterLabel->setObjectName("outputMasterLabel");

        outputLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, outputMasterLabel);

        outputErrorDisplay = new QLabel(formLayoutWidget_3);
        outputErrorDisplay->setObjectName("outputErrorDisplay");

        outputLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, outputErrorDisplay);

        outputBinaryLabel = new QLabel(formLayoutWidget_3);
        outputBinaryLabel->setObjectName("outputBinaryLabel");

        outputLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, outputBinaryLabel);

        outputBinaryDisplay = new QLabel(formLayoutWidget_3);
        outputBinaryDisplay->setObjectName("outputBinaryDisplay");

        outputLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, outputBinaryDisplay);

        outputDecimalLabel = new QLabel(formLayoutWidget_3);
        outputDecimalLabel->setObjectName("outputDecimalLabel");

        outputLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, outputDecimalLabel);

        outputDecimalDisplay = new QLabel(formLayoutWidget_3);
        outputDecimalDisplay->setObjectName("outputDecimalDisplay");

        outputLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, outputDecimalDisplay);

        outputHexLabel = new QLabel(formLayoutWidget_3);
        outputHexLabel->setObjectName("outputHexLabel");

        outputLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, outputHexLabel);

        outputHexDisplay = new QLabel(formLayoutWidget_3);
        outputHexDisplay->setObjectName("outputHexDisplay");

        outputLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, outputHexDisplay);

        outputSEMLabel = new QLabel(formLayoutWidget_3);
        outputSEMLabel->setObjectName("outputSEMLabel");

        outputLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, outputSEMLabel);

        outputSEMDisplay = new QLabel(formLayoutWidget_3);
        outputSEMDisplay->setObjectName("outputSEMDisplay");

        outputLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, outputSEMDisplay);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(130, 240, 185, 80));
        operationLayout = new QHBoxLayout(horizontalLayoutWidget);
        operationLayout->setObjectName("operationLayout");
        operationLayout->setContentsMargins(0, 0, 0, 0);
        operationLabel = new QLabel(horizontalLayoutWidget);
        operationLabel->setObjectName("operationLabel");

        operationLayout->addWidget(operationLabel);

        operationSelectorComboBox = new QComboBox(horizontalLayoutWidget);
        operationSelectorComboBox->addItem(QString());
        operationSelectorComboBox->addItem(QString());
        operationSelectorComboBox->addItem(QString());
        operationSelectorComboBox->setObjectName("operationSelectorComboBox");

        operationLayout->addWidget(operationSelectorComboBox);

        operationSubmitButton = new QPushButton(horizontalLayoutWidget);
        operationSubmitButton->setObjectName("operationSubmitButton");

        operationLayout->addWidget(operationSubmitButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1312, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        input1MasterLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Input 1</span></p></body></html>", nullptr));
        input1BinaryLabel->setText(QCoreApplication::translate("MainWindow", "Binary", nullptr));
        input1BinaryDisplay->setText(QCoreApplication::translate("MainWindow", "00000000000000000000000000000000", nullptr));
        input1DecimalLabel->setText(QCoreApplication::translate("MainWindow", "Decimal", nullptr));
        input1DecimalDisplay->setText(QCoreApplication::translate("MainWindow", "00000000000000000000000000000000", nullptr));
        input1HexLabel->setText(QCoreApplication::translate("MainWindow", "Hex", nullptr));
        input1HexDisplay->setText(QCoreApplication::translate("MainWindow", "00000000000000000000000000000000", nullptr));
        input1SEMLabel->setText(QCoreApplication::translate("MainWindow", "SEM", nullptr));
        input1SEMDisplay->setText(QCoreApplication::translate("MainWindow", "00000000000000000000000000000000", nullptr));
        input1FormatSelector->setItemText(0, QCoreApplication::translate("MainWindow", "Binary", nullptr));
        input1FormatSelector->setItemText(1, QCoreApplication::translate("MainWindow", "Decimal", nullptr));
        input1FormatSelector->setItemText(2, QCoreApplication::translate("MainWindow", "Hex", nullptr));
        input1FormatSelector->setItemText(3, QCoreApplication::translate("MainWindow", "SEM", nullptr));

        input1SubmitButton->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        input1ErrorDisplay->setText(QCoreApplication::translate("MainWindow", "ERRORMSG", nullptr));
        input2MasterLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Input 2</span></p></body></html>", nullptr));
        input2BinaryLabel->setText(QCoreApplication::translate("MainWindow", "Binary", nullptr));
        input2BinaryDisplay->setText(QCoreApplication::translate("MainWindow", "00000000000000000000000000000000", nullptr));
        input2DecimalLabel->setText(QCoreApplication::translate("MainWindow", "Decimal", nullptr));
        input2DecimalDisplay->setText(QCoreApplication::translate("MainWindow", "00000000000000000000000000000000", nullptr));
        input2HexLabel->setText(QCoreApplication::translate("MainWindow", "Hex", nullptr));
        input2HexDisplay->setText(QCoreApplication::translate("MainWindow", "00000000000000000000000000000000", nullptr));
        input2SEMLabel->setText(QCoreApplication::translate("MainWindow", "SEM", nullptr));
        input2SEMDisplay->setText(QCoreApplication::translate("MainWindow", "00000000000000000000000000000000", nullptr));
        input2ErrorDisplay->setText(QCoreApplication::translate("MainWindow", "ERRORMSG", nullptr));
        input2FormatSelector->setItemText(0, QCoreApplication::translate("MainWindow", "Binary", nullptr));
        input2FormatSelector->setItemText(1, QCoreApplication::translate("MainWindow", "Decimal", nullptr));
        input2FormatSelector->setItemText(2, QCoreApplication::translate("MainWindow", "Hex", nullptr));
        input2FormatSelector->setItemText(3, QCoreApplication::translate("MainWindow", "SEM", nullptr));

        input2SubmitButton->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        outputMasterLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Output</span></p></body></html>", nullptr));
        outputErrorDisplay->setText(QCoreApplication::translate("MainWindow", "ERRORMSG", nullptr));
        outputBinaryLabel->setText(QCoreApplication::translate("MainWindow", "Binary", nullptr));
        outputBinaryDisplay->setText(QCoreApplication::translate("MainWindow", "00000000000000000000000000000000", nullptr));
        outputDecimalLabel->setText(QCoreApplication::translate("MainWindow", "Decimal", nullptr));
        outputDecimalDisplay->setText(QCoreApplication::translate("MainWindow", "00000000000000000000000000000000", nullptr));
        outputHexLabel->setText(QCoreApplication::translate("MainWindow", "Hex", nullptr));
        outputHexDisplay->setText(QCoreApplication::translate("MainWindow", "00000000000000000000000000000000", nullptr));
        outputSEMLabel->setText(QCoreApplication::translate("MainWindow", "SEM", nullptr));
        outputSEMDisplay->setText(QCoreApplication::translate("MainWindow", "00000000000000000000000000000000", nullptr));
        operationLabel->setText(QCoreApplication::translate("MainWindow", "Operation:", nullptr));
        operationSelectorComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "+", nullptr));
        operationSelectorComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "-", nullptr));
        operationSelectorComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "*", nullptr));

        operationSubmitButton->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
