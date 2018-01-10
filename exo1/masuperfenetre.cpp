#include "masuperfenetre.h"
#include "ui_masuperfenetre.h"
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QWidget>
#include <QLCDNumber>

MaSuperFenetre::MaSuperFenetre(QWidget *parent) :

    QMainWindow(parent),
    ui(new Ui::MaSuperFenetre){

    ui->setupUi(this);



    QWidget MaSuperFenetre;
    /*
    //Pour Boutton
    QPushButton * monBouton = new QPushButton("Click",this);

    monBouton->show();
    monBouton->move(150,100);
    */

    //pour du texte
    /*
    QLabel *label = new QLabel("C'est Super INFO!",this);
    label->show();
    label->move(155,120);

    QPushButton *bouton1 = new QPushButton("2nd Boutton",this);


    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(monBouton);
   // layout->addWidget(label);
    layout->addWidget(bouton1);


    MaSuperFenetre.setLayout(layout);
    MaSuperFenetre.show();
    */

    /*
    setFixedSize(300, 150);
    QPushButton * m_bouton = new QPushButton("Quitter",this);
    m_bouton->setFont(QFont("Trebuchet MS", 14));
    m_bouton->move(110, 50);

    QObject::connect(m_bouton, SIGNAL(clicked()), qApp, SLOT(quit()));
    */


    QLCDNumber * m_lcd = new QLCDNumber(this);
    m_lcd->setSegmentStyle(QLCDNumber::Flat);
    m_lcd->move(50, 20);

    QSlider *m_slider = new QSlider(Qt::Horizontal, this);
    m_slider->setGeometry(10, 60, 150, 20);

    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_lcd, SLOT(display(int))) ;


    QGridLayout *monlayout = new QGridLayout;
    monlayout->addWidget(m_lcd, 1, 0);
    monlayout->addWidget(m_slider, 1, 1);

    //MaSuperFenetre.setLayout(layout);
    this->setLayout(monlayout);




}


MaSuperFenetre::~MaSuperFenetre()
{
    delete ui;
}
