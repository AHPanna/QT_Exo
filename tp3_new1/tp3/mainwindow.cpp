/*
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QApplication>
#include <QSqlDatabase>
#include <QtDebug>
#include <QSqlQuery>
#include <QLineEdit>
#include <QObject>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC3");
    db.setDatabaseName("Driver={MySQL ODBC 5.3 ANSI Driver};DATABASE=jeux;");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");


    if(db.open())
    {
        qDebug() << "Vous êtes maintenant connecté à " << db.hostName() ;

        QSqlQuery query;
        //changer le id par rapport au joueur
        query.exec("SELECT * FROM `jeu` WHERE id=1");
        while ( query.next() ) {
                QString name = query.value(1).toString();
                QString prenom = query.value(2).toString();
                QString age = query.value(3).toString();
                QString club = query.value(4).toString();
                qDebug() << "la requete est pour :"<< name << prenom;

                ui->_nom->setText(name);
                ui->_prenom->setText(prenom);
                ui->_age->setText(age);
                ui->_club->setText(club);
            }


        qDebug() << "Requete ok ! :)" ;

        db.close();
    }
    else{ qDebug() << "La connexion a échouée, désolé" ; }


QLineEdit note = new QLineEdit();
QPushButton *boutton = new QPushButton("SEND", this);
connect(boutton, SIGNAL(clicked(bool)), this, SLOT(change( note )));





}

void MainWindow::change(int note){


    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC3");
    db.setDatabaseName("Driver={MySQL ODBC 5.3 ANSI Driver};DATABASE=jeux;");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");


   if(db.open()){  //test connection
      qDebug()<<"succesfull";

      QSqlQuery req;

      //score affectation
      req.prepare("UPDATE jeu SET Score = (?) WHERE id = 1;");
      req.addBindValue(note);
      req.exec();
     db.close();
    }else{
        qDebug()<<"Connection lost...";
    }
}





MainWindow::~MainWindow()
{
    delete ui;
}
*/
