#include <QCoreApplication>
#include <QTextStream>
#include <QDebug>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int number;

    //method1: QTextStream
    QTextStream in(stdin);
    QTextStream out(stdout,QIODevice::WriteOnly);
    out << "Please input a number:" << endl;//"\n"
    in >> number >> endl;
    out << "Your input is: "<< number << endl;

    //method2: qDebug
    qDebug() << "***************************";

    //method3: cout & cin
    cout << "Please input a number:";
    cin >> number;
    cout << "Your input is: "<< number << endl;

    return a.exec();
}

//Output:
//Please input a number:
//6
//Your input is: 6
//***************************
//Please input a number:9
//Your input is: 9
