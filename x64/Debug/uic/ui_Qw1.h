/********************************************************************************
** Form generated from reading UI file 'Qw1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QW1_H
#define UI_QW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qw1Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Qw1Class)
    {
        if (Qw1Class->objectName().isEmpty())
            Qw1Class->setObjectName(QString::fromUtf8("Qw1Class"));
        Qw1Class->resize(600, 400);
        menuBar = new QMenuBar(Qw1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Qw1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Qw1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Qw1Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(Qw1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Qw1Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Qw1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Qw1Class->setStatusBar(statusBar);

        retranslateUi(Qw1Class);

        QMetaObject::connectSlotsByName(Qw1Class);
    } // setupUi

    void retranslateUi(QMainWindow *Qw1Class)
    {
        Qw1Class->setWindowTitle(QApplication::translate("Qw1Class", "Qw1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Qw1Class: public Ui_Qw1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QW1_H
