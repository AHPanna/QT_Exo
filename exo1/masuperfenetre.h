#ifndef MASUPERFENETRE_H
#define MASUPERFENETRE_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QPushButton>
namespace Ui {
class MaSuperFenetre;

}

class MaSuperFenetre : public QMainWindow
{
    Q_OBJECT

public:
    explicit MaSuperFenetre(QWidget *parent = 0);
    ~MaSuperFenetre();

private:
    Ui::MaSuperFenetre *ui;
};


#endif // MASUPERFENETRE_H
