#ifndef TEST_H
#define TEST_H

#include <QWidget>
#include <QLabel>
#include <QSqlDatabase>
#include <QLineEdit>
#include <QPushButton>
namespace Ui {
class test;
}

class test : public QWidget
{
    Q_OBJECT

public:
    explicit test(QWidget *parent = 0);

    ~test();


private slots:
    void getInfo();
    void setScore();
private:
    QPushButton *Button;
    QPushButton *Button1;
    Ui::test *ui;
    QString var_text1;
    QString var_text2;
    QString var_text3;
    QLabel *res;
    QLabel *nom;
    QLabel *info_nom;
    QLabel *prenom;
    QLabel *info_prenom;
    QLabel *age;
    QLabel *info_age;
    QLabel *club;
    QLabel *info_club;
    QLabel *score;
    QLabel *info_score;
    QLabel *score_new;
    QLabel *info_new_score;
    QSqlDatabase db;
    QLineEdit *text1;
    QLineEdit *text2;
    QLineEdit *text3;

};

#endif // TEST_H
