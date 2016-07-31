#include <QCoreApplication>
#include "mynetwork.h"

int main(int argc, char *argv[])
{
    system("clear");
    QCoreApplication a(argc, argv);

    QString url = "https://www.google.com.vn/?client=safari&channel=iphone_bm";
    MyNetwork net;
    net.getHtml(url);

    return a.exec();
}
