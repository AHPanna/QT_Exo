#include "test.h"
#include "ui_test.h"
#include <QPushButton>
#include <QApplication>
#include <QSqlDatabase>
#include <QtDebug>
#include <QSqlQuery>
#include <QLineEdit>
#include <QObject>
#include <QTextEdit>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QLabel>

test::test(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::test)
{
    ui->setupUi(this);
   //Connexion base de donnée
    db = QSqlDatabase::addDatabase("QODBC3");

    db.setDatabaseName("Driver={MySQL ODBC 5.3 ANSI Driver};DATABASE=jeux;");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");

    if(db.open()){
        qDebug() << "Connecté à  " << db.hostName() ;
    }
    else{
        qDebug() << "La connexion a échouée, désolé" ;
    }

    //mon boutton envoyé
    Button = new QPushButton("Envoi", this);
    Button->move(150,10);
    Button->show();

    //mon bouton note
    Button1 = new QPushButton("Noté", this);
    Button1->move(250,10);
    Button1->show();


    //textebox 1 pour Nom

    text1 = new QLineEdit(this);
    text1->move(150,40);
    text1->setText("NOM");
    //text1->show(); //ouvre une petite fenetre avec l'appellation de la fonction qline edit


    //textebox 2 pour preNom

    text2 = new QLineEdit(this);
    text2->move(150,70);
    text2->setText("Prenom");

    //textebox 3 pour la note sur

    text3 = new QLineEdit(this);
    text3->move(150,100);



    //Info

    res = new QLabel(this);
    res->move(180,120);
    res->setText("Info Joueur : ");

    //Nom
    info_nom = new QLabel(this);
    info_nom->move(100,140);
    info_nom->setText("NOM : ");


    nom = new QLabel(this);
    nom->move(180,140);
    nom->setText("  Waiting Data ... ");

    //prenom
    info_prenom = new QLabel(this);
    info_prenom->move(100,160);
    info_prenom->setText("PRENOM : ");

    prenom = new QLabel(this);
    prenom->move(180,160);
    prenom->setText("  Waiting Data ... ");

    //age
    info_age = new QLabel(this);
    info_age->move(100,180);
    info_age->setText("AGE : ");


    age = new QLabel(this);
    age->move(180,180);
    age->setText("  Waiting Data ... ");


    //club
    info_club = new QLabel(this);
    info_club->move(100,200);
    info_club->setText("CLUB : ");


    club = new QLabel(this);
    club->move(180,200);
    club->setText("  Waiting Data ... ");

    //score
    info_score = new QLabel(this);
    info_score->move(100,220);
    info_score->setText("SCORE : ");

    score = new QLabel(this);
    score->move(180,220);
    score->setText("  Waiting Data ... ");



    //score
    info_new_score = new QLabel(this);
    info_new_score->move(100,220);
    info_new_score->setText("SCORE : ");

    score_new = new QLabel(this);
    score_new->move(180,240);
    score_new->setText("  Waiting for new score ... ");



    //bouton info joueur
    connect(Button, SIGNAL (released()), this, SLOT (getInfo()));
    //bouton update score du joueur
    connect(Button1, SIGNAL (released()), this, SLOT (setScore()));


    qDebug() << "connect pass" ;
    db.close();
}


void test::getInfo(){
     var_text1 = text1->text(); //mon texte recupérer en string var_text1
     var_text2 = text2->text(); //mon texte recupérer en string var_text2
     var_text3 = text3->text(); //mon texte recupérer en string var_text3 qui est mon score

qDebug() << "rentre dans la fonction" ;
if(db.open())
{
qDebug() << "Connector to DB ...." ;
QSqlQuery query;

   query.exec("SELECT * FROM jeu WHERE Nom='" +var_text1+"' OR Prenom='"+var_text2+"' ");
    qDebug() << "pass query" ; //verification
    qDebug() << "valeur : "<< var_text1 << " et "<< var_text2 ;

    while ( query.next() ) {
       qDebug() << "rentre dans while  : query " ;
           QString _name = query.value(1).toString();
           QString _prenom = query.value(2).toString();
           QString _age = query.value(3).toString();
           QString _club = query.value(4).toString();
           QString _score = query.value(5).toString();



           nom->setText(_name);
           prenom->setText(_prenom);
           age->setText(_age);
           club->setText(_club);
           score->setText(_score);
       }

    }
}

void test::setScore(){
    var_text1 = text1->text(); //mon texte recupérer en string var_text1
    var_text2 = text2->text(); //mon texte recupérer en string var_text2
    var_text3 = text3->text(); //mon texte recupérer en string var_text2



qDebug() << "rentre dans la fonction" ;
if(db.open())
{
qDebug() << "Connector to DB ...." ;
    //ajout le score
    QSqlQuery query_score;
    qDebug()<<"Début l'ajout de score.";
    query_score.exec("UPDATE jeux.jeu SET Score='"+var_text3+"' WHERE Nom='" +var_text1+"' OR Prenom='"+var_text2+"' " );
    qDebug()<<"apres l'ajout de score.";
    while ( query_score.next() ) {

    QString new_score = query_score.value(5).toString();
    score_new->setText(new_score);

        }
    }
}







test::~test()
{
    delete ui;
}
