#include "widget.h"
#include "form1.h"
#include "converter.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   /* Widget w;
    w.show();
    Form1 f;
    f.show();*/
    Converter C;
    C.show();

    return a.exec();
}
