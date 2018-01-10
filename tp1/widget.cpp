#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QWidget>
#include <QLCDNumber>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPushButton * monBouton = new QPushButton("Pressez ici !!!");
    QLabel *monLabel = new QLabel("C'est Super INFO!",this);

    QLCDNumber * m_lcd = new QLCDNumber(this);
    m_lcd->setSegmentStyle(QLCDNumber::Flat);
    //m_lcd->move(50, 20);

    QSlider *m_slider = new QSlider(Qt::Horizontal, this);
    //m_slider->setGeometry(10, 60, 150, 20);

    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_lcd, SLOT(display(int))) ;
    QObject::connect(monBouton, SIGNAL(clicked(bool)), monLabel, SLOT(hide()));

    QGridLayout *monlayout = new QGridLayout;
    monlayout->addWidget(monBouton, 0, 0);
    monlayout->addWidget(monLabel, 0, 1);
    monlayout->addWidget(m_lcd, 1, 0);
    monlayout->addWidget(m_slider, 1, 1);


    //MaSuperFenetre.setLayout(layout);
    this->setLayout(monlayout);


}

Widget::~Widget()
{
    delete ui;
}
