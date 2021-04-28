#include<iostream>
#include <QApplication>
#include <QLabel>
#include <QWidget>



int main(int argc, char *argv[ ])
{

QApplication app(argc, argv);
QLabel hello("<center>ZDRAVO</center>");
hello.setWindowTitle("My First Qt Program");
hello.resize(1000, 600);
hello.show();
return app.exec();
}