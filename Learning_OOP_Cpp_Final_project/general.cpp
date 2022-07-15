#include "general.h"
#include "ui_general.h"
#include "home.h"
#include <exercise.h>

Home *h_g;
exercise *e_g;

general::general(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::general)
{
    ui->setupUi(this);
}

general::~general()
{
    delete ui;
}

void general::on_home_g_clicked()
{
    hide();
    h_g =new Home(this);
    h_g -> show();
}


void general::on_exercise_g_clicked()
{
    hide();
    e_g =new exercise(this);
    e_g -> show();
}


void general::on_about_g_clicked()
{
     QMessageBox::about(this,"About","HCMUTE - HUYNH CHI CUONG - KMT - 19119157");
}


void general::on_exit_clicked()
{
        exit(EXIT_FAILURE);
}


void general::on_menu_o_c_clicked()
{
    static int ShowOrHide = 0;
    if (++ShowOrHide % 2) {
        QPropertyAnimation *animation = new QPropertyAnimation(ui -> menu, "maximumWidth");
        animation->setDuration(500);
        animation->setStartValue(256);
        animation->setEndValue(125);
        animation->start();
    } else {
        QPropertyAnimation *animation = new QPropertyAnimation(ui -> menu, "maximumWidth");
        animation->setDuration(500);
        animation->setStartValue(125);
        animation->setEndValue(256);
        animation->start();
    }
}


void general::on_func_ge_clicked()
{
    QFile file("D:\\Learning_OOP_Cpp_Final_project\\general_func.txt");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
     ui->textBrowser->setText(in.readAll());

     file.close();
}


void general::on_arr_ge_clicked()
{
    QFile file("D:\\Learning_OOP_Cpp_Final_project\\general_arr.txt");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
     ui->textBrowser->setText(in.readAll());
     file.close();
}


void general::on_pointer_ge_clicked()
{
    QFile file("D:\\Learning_OOP_Cpp_Final_project\\general_pointers.txt");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
     ui->textBrowser->setText(in.readAll());
     file.close();
}


void general::on_Class_ge_clicked()
{
    QFile file("D:\\Learning_OOP_Cpp_Final_project\\class_object.txt");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
     ui->textBrowser->setText(in.readAll());
     file.close();
}


void general::on_Inh_ge_clicked()
{
    QFile file("D:\\Learning_OOP_Cpp_Final_project\\general_Inhertance.txt");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
     ui->textBrowser->setText(in.readAll());
     file.close();
}


void general::on_Poly_ge_clicked()
{
    QFile file("D:\\Learning_OOP_Cpp_Final_project\\general_polymorphism.txt");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
     ui->textBrowser->setText(in.readAll());
     file.close();
}

