#include "class_and_object.h"
#include "ui_class_and_object.h"
#include <exercise.h>
exercise *ex_1;
int flag = 0;
Class_and_Object::Class_and_Object(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Class_and_Object)
{
    ui->setupUi(this);
}

Class_and_Object::~Class_and_Object()
{
    delete ui;
}
void Class_and_Object:: clear_radio_btn(void){
    ui ->radioButton -> setChecked(false);
    ui -> radioButton->setAutoExclusive(false);
    ui -> radioButton->setChecked(false);
    ui -> radioButton->setAutoExclusive(true);
    ui ->radioButton_2 -> setChecked(false);
    ui -> radioButton_2->setAutoExclusive(false);
    ui -> radioButton_2->setChecked(false);
    ui -> radioButton_2->setAutoExclusive(true);
    ui ->radioButton_3 -> setChecked(false);
    ui -> radioButton_3->setAutoExclusive(false);
    ui -> radioButton_3->setChecked(false);
    ui -> radioButton_3->setAutoExclusive(true);
    ui ->radioButton_4 -> setChecked(false);
    ui -> radioButton_4->setAutoExclusive(false);
    ui -> radioButton_4->setChecked(false);
    ui -> radioButton_4->setAutoExclusive(true);
}
void Class_and_Object::on_back_1_clicked()
{
    hide();
    ex_1 =new exercise(this);
    ex_1 -> show();
}


void Class_and_Object::on_check_1_clicked()
{
    QString answer;

    QFile file("‪D:\\Learning_OOP_Cpp_Final_project\\questions_class_object.txt");
    int line_count=0;
    file.open(QIODevice::ReadOnly);
    QString line[100];
    QTextStream in(&file);
    while( !in.atEnd())
    {
        for (int i = 0;i<5 ;i++ ) {
            ui->ques_1_1->setText(in.readLine());
        }
        line[line_count]=in.readLine();
        line_count++;
    }
    file.close();
if(ui->radioButton->isChecked()){
    answer = '1';
}
if(ui->radioButton_2->isChecked()){
    answer = "2";
}
if(ui->radioButton_3->isChecked()){
    answer = "3";
}
if(ui->radioButton_4->isChecked()){
    answer = "4";
}
ui->ques_1->setText(answer);
clear_radio_btn();
if(answer==line[flag-1]){
    ui->ques_1->setText("Exactly");
}
else
{
    ui->ques_1->setText("Wrong");
}
}

void Class_and_Object::on_push1_clicked()
{
    flag = 1;
    clear_radio_btn();
    QFile file("‪D:\\Learning_OOP_Cpp_Final_project\\questions_class_object.txt");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
     ui->ques_1->setText(in.readLine());
     ui->ans_a_1->setText(in.readLine());
     ui->ans_b_1->setText(in.readLine());
     ui->ans_c_1->setText(in.readLine());
     ui->ans_d_1->setText(in.readLine());
     ui->ques_1_1->setText(in.readLine());
     file.close();
}


void Class_and_Object::on_push2_clicked()
{
    flag = 2;
    clear_radio_btn();
    QFile file("‪D:\\Learning_OOP_Cpp_Final_project\\questions_class_object.txt");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    for (int i = 0; i < 2 ; i++ ) {
     ui->ques_1->setText(in.readLine());
     ui->ans_a_1->setText(in.readLine());
     ui->ans_b_1->setText(in.readLine());
     ui->ans_c_1->setText(in.readLine());
     ui->ans_d_1->setText(in.readLine());
     ui->ques_1_1->setText(in.readLine());
     }
    file.close();
}


void Class_and_Object::on_push3_clicked()
{
    flag = 3;
    clear_radio_btn();
    QFile file("‪D:\\Learning_OOP_Cpp_Final_project\\questions_class_object.txt");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    for (int i = 0; i < 3 ; i++ ) {
     ui->ques_1->setText(in.readLine());
     ui->ans_a_1->setText(in.readLine());
     ui->ans_b_1->setText(in.readLine());
     ui->ans_c_1->setText(in.readLine());
     ui->ans_d_1->setText(in.readLine());
          ui->ques_1_1->setText(in.readLine());
     }
     file.close();
}


void Class_and_Object::on_push4_clicked()
{
    flag = 4;
    clear_radio_btn();
    QFile file("‪D:\\Learning_OOP_Cpp_Final_project\\questions_class_object.txt");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    for (int i = 0; i < 4 ; i++ ) {
     ui->ques_1->setText(in.readLine());
     ui->ans_a_1->setText(in.readLine());
     ui->ans_b_1->setText(in.readLine());
     ui->ans_c_1->setText(in.readLine());
     ui->ans_d_1->setText(in.readLine());
          ui->ques_1_1->setText(in.readLine());
     }
     file.close();
}


void Class_and_Object::on_push5_clicked()
{
    flag = 5;
    clear_radio_btn();
    QFile file("‪D:\\Learning_OOP_Cpp_Final_project\\questions_class_object.txt");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    for (int i = 0; i < 5 ; i++ ) {
     ui->ques_1->setText(in.readLine());
     ui->ans_a_1->setText(in.readLine());
     ui->ans_b_1->setText(in.readLine());
     ui->ans_c_1->setText(in.readLine());
     ui->ans_d_1->setText(in.readLine());
          ui->ques_1_1->setText(in.readLine());
     }
     file.close();
}


void Class_and_Object::on_push6_clicked()
{
        flag = 6;
    clear_radio_btn();
    QFile file("‪D:\\Learning_OOP_Cpp_Final_project\\questions_class_object.txt");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    for (int i = 0; i < 6 ; i++ ) {
     ui->ques_1->setText(in.readLine());
     ui->ans_a_1->setText(in.readLine());
     ui->ans_b_1->setText(in.readLine());
     ui->ans_c_1->setText(in.readLine());
     ui->ans_d_1->setText(in.readLine());
          ui->ques_1_1->setText(in.readLine());
     }
     file.close();
}


void Class_and_Object::on_push7_clicked()
{
        flag = 7;
    clear_radio_btn();
    QFile file("‪D:\\Learning_OOP_Cpp_Final_project\\questions_class_object.txt");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    for (int i = 0; i < 7 ; i++ ) {
     ui->ques_1->setText(in.readLine());
     ui->ans_a_1->setText(in.readLine());
     ui->ans_b_1->setText(in.readLine());
     ui->ans_c_1->setText(in.readLine());
     ui->ans_d_1->setText(in.readLine());
          ui->ques_1_1->setText(in.readLine());
     }
     file.close();
}


void Class_and_Object::on_push8_clicked()
{
        flag = 8;
    clear_radio_btn();
    QFile file("‪D:\\Learning_OOP_Cpp_Final_project\\questions_class_object.txt");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    for (int i = 0; i < 8 ; i++ ) {
     ui->ques_1->setText(in.readLine());
     ui->ans_a_1->setText(in.readLine());
     ui->ans_b_1->setText(in.readLine());
     ui->ans_c_1->setText(in.readLine());
     ui->ans_d_1->setText(in.readLine());
          ui->ques_1_1->setText(in.readLine());
     }
     file.close();
}


void Class_and_Object::on_push9_clicked()
{
        flag = 9;
    clear_radio_btn();
    QFile file("‪D:\\Learning_OOP_Cpp_Final_project\\questions_class_object.txt");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    for (int i = 0; i < 9 ; i++ ) {
     ui->ques_1->setText(in.readLine());
     ui->ans_a_1->setText(in.readLine());
     ui->ans_b_1->setText(in.readLine());
     ui->ans_c_1->setText(in.readLine());
     ui->ans_d_1->setText(in.readLine());
          ui->ques_1_1->setText(in.readLine());
     }
     file.close();
}


void Class_and_Object::on_push10_clicked()
{
        flag = 10;
    clear_radio_btn();
    QFile file("‪D:\\Learning_OOP_Cpp_Final_project\\questions_class_object.txt");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    for (int i = 0; i < 10 ; i++ ) {
     ui->ques_1->setText(in.readLine());
     ui->ans_a_1->setText(in.readLine());
     ui->ans_b_1->setText(in.readLine());
     ui->ans_c_1->setText(in.readLine());
     ui->ans_d_1->setText(in.readLine());
          ui->ques_1_1->setText(in.readLine());
     }
     file.close();
}

