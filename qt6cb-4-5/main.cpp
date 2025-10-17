#include <QCoreApplication>
#include <QDebug>

enum Colors {black, red, green, blue};

//Precursor to classes
struct product
{
    int weight;
    double value;
    Colors color;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    product laptop; //No assignment!
    qInfo() << "size:" << sizeof(laptop);

    laptop.color = Colors::green;
    laptop.value = 540.87;
    laptop.weight = 3;

    qInfo() << "color:" << laptop.color;
    qInfo() << "value:" << laptop.value;
    qInfo() << "weight:" << laptop.weight;

    // qInfo() << "laptop" << laptop;
    qInfo() << "value size:" << sizeof(laptop.value);

    return a.exec();
}
