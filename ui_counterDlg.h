/********************************************************************************
** Form generated from reading UI file 'counterDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTERDLG_H
#define UI_COUNTERDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Counter
{
public:
    QPushButton *button;
    QLCDNumber *lcdNumber;
    QPushButton *restart;
    QSlider *verticalSlider;
    QLCDNumber *lcdNumber_2;

    void setupUi(QWidget *Counter)
    {
        if (Counter->objectName().isEmpty())
            Counter->setObjectName(QString::fromUtf8("Counter"));
        Counter->resize(400, 300);
        button = new QPushButton(Counter);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(220, 210, 131, 41));
        lcdNumber = new QLCDNumber(Counter);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(50, 40, 301, 91));
        restart = new QPushButton(Counter);
        restart->setObjectName(QString::fromUtf8("restart"));
        restart->setGeometry(QRect(50, 210, 131, 41));
        verticalSlider = new QSlider(Counter);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(370, 120, 29, 160));
        verticalSlider->setOrientation(Qt::Vertical);
        lcdNumber_2 = new QLCDNumber(Counter);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(220, 150, 131, 41));

        retranslateUi(Counter);

        QMetaObject::connectSlotsByName(Counter);
    } // setupUi

    void retranslateUi(QWidget *Counter)
    {
        Counter->setWindowTitle(QApplication::translate("Counter", "Counter", 0, QApplication::UnicodeUTF8));
        button->setText(QApplication::translate("Counter", "STOP", 0, QApplication::UnicodeUTF8));
        restart->setText(QApplication::translate("Counter", "RESTART", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Counter: public Ui_Counter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTERDLG_H
