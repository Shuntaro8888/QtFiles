#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 44; //can change
    const int id = 215; //can not change

    // id = 12;
    qInfo() << "id:" << id;

    // int red = 0;
    // int green = 1;
    // int blue = 3467;

    enum Color {red = 9, green = 10.9, blue = 256};
    Color::red = 10;

    Color  mycolor = Color::blue;

    qInfo() << "Color" << mycolor;


    return a.exec();
}
