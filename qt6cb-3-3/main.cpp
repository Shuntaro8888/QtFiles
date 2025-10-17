#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Set up code that uses the Qt event loop here.
    // Call a.quit() or a.exit() to quit the application.
    // A not very useful example would be including
    // #include <QTimer>
    // near the top of the file and calling
    // QTimer::singleShot(5000, &a, &QCoreApplication::quit);
    // which quits the application after 5 seconds.

    // If you do not need a running Qt event loop, remove the call
    // to a.exec() or use the Non-Qt Plain C++ Application template.

    bool LightSwitch = false;

    qInfo() << "Is on:" << LightSwitch;

    LightSwitch = true;

    qInfo() << "Is on:" << LightSwitch;

    int age =44;
    double height = 6.02;

    qInfo() << "Age:" << age;
    qInfo() << "Height:" << height;

    age = 44.90;
    qInfo() << "Age:" << age;

    unsigned int dogs = -1;
    qInfo() << "Dogs:" << dogs;

    qInfo() << sizeof(dogs);

    return a.exec();
}
