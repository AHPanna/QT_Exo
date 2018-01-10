/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *Nom;
    QLabel *Prenom;
    QLabel *Age;
    QLabel *Club;
    QLabel *_nom;
    QLabel *_prenom;
    QLabel *_age;
    QLabel *_club;
    QLabel *score_2;
    QLabel *label_2;
    QLineEdit *score;
    QPushButton *boutton;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 61, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Nom = new QLabel(layoutWidget);
        Nom->setObjectName(QStringLiteral("Nom"));

        verticalLayout->addWidget(Nom);

        Prenom = new QLabel(layoutWidget);
        Prenom->setObjectName(QStringLiteral("Prenom"));

        verticalLayout->addWidget(Prenom);

        Age = new QLabel(layoutWidget);
        Age->setObjectName(QStringLiteral("Age"));

        verticalLayout->addWidget(Age);

        Club = new QLabel(layoutWidget);
        Club->setObjectName(QStringLiteral("Club"));

        verticalLayout->addWidget(Club);

        _nom = new QLabel(centralWidget);
        _nom->setObjectName(QStringLiteral("_nom"));
        _nom->setGeometry(QRect(80, 40, 211, 16));
        _prenom = new QLabel(centralWidget);
        _prenom->setObjectName(QStringLiteral("_prenom"));
        _prenom->setGeometry(QRect(80, 70, 211, 16));
        _age = new QLabel(centralWidget);
        _age->setObjectName(QStringLiteral("_age"));
        _age->setGeometry(QRect(80, 110, 211, 16));
        _club = new QLabel(centralWidget);
        _club->setObjectName(QStringLiteral("_club"));
        _club->setGeometry(QRect(80, 150, 211, 16));
        score_2 = new QLabel(centralWidget);
        score_2->setObjectName(QStringLiteral("score_2"));
        score_2->setGeometry(QRect(10, 200, 47, 13));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 180, 131, 16));
        score = new QLineEdit(centralWidget);
        score->setObjectName(QStringLiteral("score"));
        score->setGeometry(QRect(100, 200, 41, 20));
        boutton = new QPushButton(centralWidget);
        boutton->setObjectName(QStringLiteral("boutton"));
        boutton->setGeometry(QRect(150, 200, 51, 23));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Nom->setText(QApplication::translate("MainWindow", "Nom", 0));
        Prenom->setText(QApplication::translate("MainWindow", "Prenom", 0));
        Age->setText(QApplication::translate("MainWindow", "Age", 0));
        Club->setText(QApplication::translate("MainWindow", "Club", 0));
        _nom->setText(QApplication::translate("MainWindow", "::data_get_view", 0));
        _prenom->setText(QApplication::translate("MainWindow", "::data_get_view", 0));
        _age->setText(QApplication::translate("MainWindow", "::data_get_view", 0));
        _club->setText(QApplication::translate("MainWindow", "::data_get_view", 0));
        score_2->setText(QApplication::translate("MainWindow", "Score", 0));
        label_2->setText(QApplication::translate("MainWindow", "Donner un score sur 10", 0));
        boutton->setText(QApplication::translate("MainWindow", "GO!!!", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
