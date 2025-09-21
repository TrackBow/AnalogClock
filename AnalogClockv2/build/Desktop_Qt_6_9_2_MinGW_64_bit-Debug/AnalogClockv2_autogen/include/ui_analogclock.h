/********************************************************************************
** Form generated from reading UI file 'analogclock.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALOGCLOCK_H
#define UI_ANALOGCLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_analogclock
{
public:

    void setupUi(QWidget *analogclock)
    {
        if (analogclock->objectName().isEmpty())
            analogclock->setObjectName("analogclock");
        analogclock->resize(800, 600);

        retranslateUi(analogclock);

        QMetaObject::connectSlotsByName(analogclock);
    } // setupUi

    void retranslateUi(QWidget *analogclock)
    {
        analogclock->setWindowTitle(QCoreApplication::translate("analogclock", "analogclock", nullptr));
    } // retranslateUi

};

namespace Ui {
    class analogclock: public Ui_analogclock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALOGCLOCK_H
