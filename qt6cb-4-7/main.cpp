#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;
    qInfo() << age;

    age = 21;
    qInfo() << age;

    age++;
    qInfo() << age;

    age --;
    qInfo() << age;

    int older = age * 5;
    qInfo() << older;

    return a.exec();
}
