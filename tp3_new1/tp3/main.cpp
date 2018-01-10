//#include "mainwindow.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QtDebug>
#include <QSqlQuery>
#include "test.h"
int main(int argc, char *argv[])
{

        QApplication a(argc, argv);
        //MainWindow w;

        test w;
        w.show();


        /*
        QSqlDatabase db = QSqlDatabase::addDatabase("QODBC3");

        db.setDatabaseName("Driver={MySQL ODBC 5.3 ANSI Driver};DATABASE=jeux;");
        db.setHostName("127.0.0.1");
        db.setUserName("root");
        db.setPassword("");
        bool ok = db.open();
        if(db.open())
        {
            qDebug() << "Vous êtes maintenant connecté à " << db.hostName() ;

            QSqlQuery query;

            query.exec("SELECT * FROM `jeu` ");
            while ( query.next() ) {
                    QString name = query.value(1).toString();
                     QString prenom = query.value(2).toString();
                    qDebug() << name << prenom;
                }
            qDebug() << "Requete ok ! :)" ;
            db.close();

        }
        else
        {
            qDebug() << "La connexion a échouée, désolé" ;
        }
        */



    return a.exec();
}
