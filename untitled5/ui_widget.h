/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLCDNumber *lcdNumber;
    QLabel *label_5;
    QLabel *label_6;
    QLCDNumber *lcdNumber_2;
    QLabel *label_7;
    QSlider *horizontalSlider;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(510, 382);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 512, 384));
        label->setPixmap(QPixmap(QString::fromUtf8(":/pic/1.png")));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(450, 120, 58, 56));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/pic/2.png")));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(450, 120, 57, 55));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/pic/3.png")));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 120, 57, 54));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/pic/4.png")));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 270, 91, 41));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 350, 71, 31));
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(410, 290, 91, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224 Light"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        lcdNumber->setFont(font);
        lcdNumber->setFrameShape(QFrame::NoFrame);
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setDigitCount(5);
        lcdNumber->setProperty("intValue", QVariant(30));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(360, 290, 91, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_5->setFont(font1);
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(400, 240, 91, 41));
        label_6->setFont(font1);
        lcdNumber_2 = new QLCDNumber(Widget);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(410, 240, 91, 41));
        lcdNumber_2->setFont(font);
        lcdNumber_2->setFrameShape(QFrame::NoFrame);
        lcdNumber_2->setSmallDecimalPoint(false);
        lcdNumber_2->setDigitCount(5);
        lcdNumber_2->setProperty("intValue", QVariant(0));
        label_7 = new QLabel(Widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(-70, 0, 591, 521));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/pp/2099521851285938676.jpg")));
        horizontalSlider = new QSlider(Widget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(130, 340, 160, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_8 = new QLabel(Widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(70, 270, 81, 76));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/ppp/soul1.png")));
        label_9 = new QLabel(Widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(140, 270, 77, 77));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/ppp/soul2.png")));
        label_10 = new QLabel(Widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(210, 270, 80, 76));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/ppp/soul3.png")));
        label_11 = new QLabel(Widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(280, 270, 71, 77));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/ppp/soul4.png")));
        label_12 = new QLabel(Widget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(5, 110, 83, 80));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/op/explosion_lower.png")));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(440, 310, 71, 31));
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        lcdNumber->raise();
        label_5->raise();
        label_6->raise();
        lcdNumber_2->raise();
        horizontalSlider->raise();
        label_8->raise();
        label_9->raise();
        label_11->raise();
        label_10->raise();
        label_12->raise();
        label_7->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        pushButton->setText(QApplication::translate("Widget", "Start", 0));
        pushButton_2->setText(QApplication::translate("Widget", "Quit", 0));
        label_5->setText(QApplication::translate("Widget", "\345\211\251\351\244\230\346\231\202\351\226\223:", 0));
        label_6->setText(QApplication::translate("Widget", "\345\276\227\345\210\206:", 0));
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        pushButton_3->setText(QApplication::translate("Widget", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
