#include "mainwindow.h"

#include "newspaper.h"
#include "reader.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Newspaper newspaper("Newspaper A");
    Reader reader;

    QObject::connect(&newspaper, &Newspaper::newPaper, &reader, &Reader::receiveNewspaper);

    newspaper.send();

    return a.exec();
}
