/********************************************************************************
** Form generated from reading UI file 'blackstone.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLACKSTONE_H
#define UI_BLACKSTONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Blackstone
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLineEdit *IDInput;
    QLabel *LogLable;
    QPushButton *loginButton;
    QLabel *label;
    QLineEdit *passwordInput;
    QLabel *label_2;
    QWidget *page_2;
    QLabel *userLable2;
    QPushButton *CoffeePop;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QWidget *page_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QSlider *horizontalSlider;
    QLabel *label_7;
    QPushButton *noneButton;
    QPushButton *skimButton;
    QPushButton *fatButton;
    QSlider *horizontalSlider_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *ContinueBtn;
    QLabel *label_11;
    QComboBox *comboBox;
    QLabel *label_12;
    QPushButton *ContinueBtn_2;
    QComboBox *comboBox_2;
    QWidget *page_4;
    QLabel *label_13;
    QPushButton *pushButton_5;
    QWidget *page_5;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QWidget *page_6;
    QListWidget *listWidget;
    QCheckBox *lightCheck;
    QCheckBox *DarkCheck;
    QCheckBox *coldCheck;
    QCheckBox *hotCheck;
    QCheckBox *nodairyCheck;
    QCheckBox *skimCheck;
    QCheckBox *wholeCheck;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Blackstone)
    {
        if (Blackstone->objectName().isEmpty())
            Blackstone->setObjectName(QString::fromUtf8("Blackstone"));
        Blackstone->resize(941, 563);
        QFont font;
        font.setPointSize(12);
        Blackstone->setFont(font);
        centralwidget = new QWidget(Blackstone);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 10, 901, 501));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        IDInput = new QLineEdit(page);
        IDInput->setObjectName(QString::fromUtf8("IDInput"));
        IDInput->setGeometry(QRect(476, 120, 211, 31));
        LogLable = new QLabel(page);
        LogLable->setObjectName(QString::fromUtf8("LogLable"));
        LogLable->setGeometry(QRect(270, 240, 361, 31));
        QFont font1;
        font1.setPointSize(14);
        LogLable->setFont(font1);
        loginButton = new QPushButton(page);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(366, 300, 191, 71));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(116, 100, 211, 61));
        passwordInput = new QLineEdit(page);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));
        passwordInput->setGeometry(QRect(476, 180, 211, 31));
        passwordInput->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 170, 121, 51));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        userLable2 = new QLabel(page_2);
        userLable2->setObjectName(QString::fromUtf8("userLable2"));
        userLable2->setGeometry(QRect(290, 40, 341, 61));
        QFont font2;
        font2.setPointSize(20);
        userLable2->setFont(font2);
        CoffeePop = new QPushButton(page_2);
        CoffeePop->setObjectName(QString::fromUtf8("CoffeePop"));
        CoffeePop->setGeometry(QRect(90, 160, 311, 191));
        QFont font3;
        font3.setPointSize(16);
        CoffeePop->setFont(font3);
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 160, 301, 191));
        pushButton_2->setFont(font3);
        pushButton_6 = new QPushButton(page_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(342, 427, 171, 51));
        pushButton_6->setFont(font1);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 40, 181, 51));
        label_4->setFont(font3);
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(370, 10, 81, 41));
        QFont font4;
        font4.setPointSize(10);
        label_5->setFont(font4);
        label_6 = new QLabel(page_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(720, 10, 81, 41));
        label_6->setFont(font4);
        horizontalSlider = new QSlider(page_3);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(370, 60, 391, 22));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(page_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 110, 91, 51));
        label_7->setFont(font3);
        noneButton = new QPushButton(page_3);
        noneButton->setObjectName(QString::fromUtf8("noneButton"));
        noneButton->setGeometry(QRect(370, 120, 131, 28));
        skimButton = new QPushButton(page_3);
        skimButton->setObjectName(QString::fromUtf8("skimButton"));
        skimButton->setGeometry(QRect(520, 120, 131, 28));
        fatButton = new QPushButton(page_3);
        fatButton->setObjectName(QString::fromUtf8("fatButton"));
        fatButton->setGeometry(QRect(670, 120, 131, 28));
        horizontalSlider_2 = new QSlider(page_3);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(370, 220, 391, 22));
        horizontalSlider_2->setMinimum(196);
        horizontalSlider_2->setMaximum(206);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        label_8 = new QLabel(page_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(720, 170, 81, 41));
        label_8->setFont(font4);
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(370, 170, 81, 41));
        label_9->setFont(font4);
        label_10 = new QLabel(page_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(50, 200, 231, 51));
        label_10->setFont(font3);
        ContinueBtn = new QPushButton(page_3);
        ContinueBtn->setObjectName(QString::fromUtf8("ContinueBtn"));
        ContinueBtn->setGeometry(QRect(770, 450, 111, 41));
        label_11 = new QLabel(page_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(60, 290, 101, 41));
        label_11->setFont(font);
        comboBox = new QComboBox(page_3);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(40, 350, 131, 31));
        label_12 = new QLabel(page_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(290, 280, 131, 41));
        label_12->setFont(font);
        ContinueBtn_2 = new QPushButton(page_3);
        ContinueBtn_2->setObjectName(QString::fromUtf8("ContinueBtn_2"));
        ContinueBtn_2->setGeometry(QRect(30, 450, 111, 41));
        comboBox_2 = new QComboBox(page_3);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(280, 350, 131, 31));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_13 = new QLabel(page_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(370, 70, 141, 71));
        label_13->setFont(font3);
        pushButton_5 = new QPushButton(page_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(300, 377, 241, 81));
        pushButton_5->setFont(font);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        label_14 = new QLabel(page_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(380, 80, 211, 71));
        QFont font5;
        font5.setPointSize(18);
        label_14->setFont(font5);
        label_15 = new QLabel(page_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(250, 150, 211, 71));
        label_15->setFont(font5);
        label_16 = new QLabel(page_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(484, 155, 341, 61));
        label_16->setFont(font5);
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        listWidget = new QListWidget(page_6);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(160, 0, 571, 361));
        lightCheck = new QCheckBox(page_6);
        lightCheck->setObjectName(QString::fromUtf8("lightCheck"));
        lightCheck->setGeometry(QRect(150, 390, 131, 31));
        DarkCheck = new QCheckBox(page_6);
        DarkCheck->setObjectName(QString::fromUtf8("DarkCheck"));
        DarkCheck->setGeometry(QRect(150, 430, 131, 31));
        coldCheck = new QCheckBox(page_6);
        coldCheck->setObjectName(QString::fromUtf8("coldCheck"));
        coldCheck->setGeometry(QRect(390, 390, 131, 31));
        hotCheck = new QCheckBox(page_6);
        hotCheck->setObjectName(QString::fromUtf8("hotCheck"));
        hotCheck->setGeometry(QRect(390, 430, 131, 31));
        nodairyCheck = new QCheckBox(page_6);
        nodairyCheck->setObjectName(QString::fromUtf8("nodairyCheck"));
        nodairyCheck->setGeometry(QRect(630, 380, 131, 31));
        skimCheck = new QCheckBox(page_6);
        skimCheck->setObjectName(QString::fromUtf8("skimCheck"));
        skimCheck->setGeometry(QRect(630, 420, 131, 31));
        wholeCheck = new QCheckBox(page_6);
        wholeCheck->setObjectName(QString::fromUtf8("wholeCheck"));
        wholeCheck->setGeometry(QRect(630, 460, 131, 31));
        pushButton = new QPushButton(page_6);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 470, 131, 28));
        pushButton_4 = new QPushButton(page_6);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(50, 470, 131, 28));
        stackedWidget->addWidget(page_6);
        Blackstone->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Blackstone);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Blackstone->setStatusBar(statusbar);
        QWidget::setTabOrder(IDInput, passwordInput);
        QWidget::setTabOrder(passwordInput, loginButton);
        QWidget::setTabOrder(loginButton, CoffeePop);
        QWidget::setTabOrder(CoffeePop, pushButton_2);

        retranslateUi(Blackstone);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Blackstone);
    } // setupUi

    void retranslateUi(QMainWindow *Blackstone)
    {
        Blackstone->setWindowTitle(QApplication::translate("Blackstone", "Blackstone", nullptr));
        LogLable->setText(QApplication::translate("Blackstone", "Enter your Information to Continue", nullptr));
        loginButton->setText(QApplication::translate("Blackstone", "Login", nullptr));
        label->setText(QApplication::translate("Blackstone", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">	Enter Your ID	</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Blackstone", "<html><head/><body><p align=\"right\"><span style=\" font-size:16pt;\">Password</span></p></body></html>", nullptr));
        userLable2->setText(QApplication::translate("Blackstone", "Welcome UserName", nullptr));
        CoffeePop->setText(QApplication::translate("Blackstone", "Coffee By Popularity", nullptr));
        pushButton_2->setText(QApplication::translate("Blackstone", "Create Custom Coffee", nullptr));
        pushButton_6->setText(QApplication::translate("Blackstone", "Log Out", nullptr));
        label_4->setText(QApplication::translate("Blackstone", "Roast Intensity", nullptr));
        label_5->setText(QApplication::translate("Blackstone", "Light", nullptr));
        label_6->setText(QApplication::translate("Blackstone", "Dark", nullptr));
        label_7->setText(QApplication::translate("Blackstone", "Dairy", nullptr));
        noneButton->setText(QApplication::translate("Blackstone", "None", nullptr));
        skimButton->setText(QApplication::translate("Blackstone", "Skim", nullptr));
        fatButton->setText(QApplication::translate("Blackstone", "Whole Fat", nullptr));
        label_8->setText(QApplication::translate("Blackstone", "206 \302\260F", nullptr));
        label_9->setText(QApplication::translate("Blackstone", "196 \302\260F", nullptr));
        label_10->setText(QApplication::translate("Blackstone", "Water Temperature", nullptr));
        ContinueBtn->setText(QApplication::translate("Blackstone", "Continue", nullptr));
        label_11->setText(QApplication::translate("Blackstone", "Flavors", nullptr));
        label_12->setText(QApplication::translate("Blackstone", "Sweeteners", nullptr));
        ContinueBtn_2->setText(QApplication::translate("Blackstone", "Back", nullptr));
        label_13->setText(QApplication::translate("Blackstone", "WALLET", nullptr));
        pushButton_5->setText(QApplication::translate("Blackstone", "Payment Confirmed", nullptr));
        label_14->setText(QApplication::translate("Blackstone", "Have A ", nullptr));
        label_15->setText(QApplication::translate("Blackstone", "Nice Coffee", nullptr));
        label_16->setText(QApplication::translate("Blackstone", "USERName", nullptr));
        lightCheck->setText(QApplication::translate("Blackstone", "Light", nullptr));
        DarkCheck->setText(QApplication::translate("Blackstone", "Dark", nullptr));
        coldCheck->setText(QApplication::translate("Blackstone", "196 F", nullptr));
        hotCheck->setText(QApplication::translate("Blackstone", "206 F", nullptr));
        nodairyCheck->setText(QApplication::translate("Blackstone", "No Dairy", nullptr));
        skimCheck->setText(QApplication::translate("Blackstone", "Skim", nullptr));
        wholeCheck->setText(QApplication::translate("Blackstone", "Whole Milk", nullptr));
        pushButton->setText(QApplication::translate("Blackstone", "Update", nullptr));
        pushButton_4->setText(QApplication::translate("Blackstone", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Blackstone: public Ui_Blackstone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLACKSTONE_H
