#include "masuperfenetre.h"
#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QLCDNumber>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MaSuperFenetre w;
    w.show();

    /*
    QWidget MaSuperFenetre;

    QPushButton *bouton1 = new QPushButton("Pressez ici !!!");
    QLabel *label = new QLabel("C'est Super INFO!");
    QPushButton *bouton3 = new QPushButton("Le Boutton 2");

    QGridLayout *layout = new QGridLayout;
        layout->addWidget(bouton1, 0, 0);
        layout->addWidget(label, 0, 1);
        layout->addWidget(bouton3, 1, 0);


    MaSuperFenetre.setLayout(layout);
    MaSuperFenetre.show();
    */





    return a.exec();
}
