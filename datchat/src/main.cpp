#include "pch.h"
#include "datchat/DatChat.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    dat::DatChat w;
    w.show();

    return a.exec();
}
