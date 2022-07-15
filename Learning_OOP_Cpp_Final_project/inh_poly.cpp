#include "inh_poly.h"
#include "ui_inh_poly.h"
#include <exercise.h>
exercise *ex_3;
int flag_3 = 0;
Inh_Poly::Inh_Poly(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Inh_Poly)
{
    ui->setupUi(this);
}

Inh_Poly::~Inh_Poly()
{
    delete ui;
}

void Inh_Poly:: clear_radio_btn(void){
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
void Inh_Poly::on_push1_clicked()
{
    flag_3 = 1;
    clear_radio_btn();
    QFile file("D:\\Learning_OOP_Cpp_Final_project\\questions_Inh_Poly.txt");
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


void Inh_Poly::on_push2_clicked()
{
    flag_3 = 2;
    clear_radio_btn();
    QFile file("D:\\Learning_OOP_Cpp_Final_project\\questions_Inh_Poly.txt");
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


void Inh_Poly::on_push3_clicked()
{
    flag_3 = 3;
    clear_radio_btn();
    QFile file("D:\\Learning_OOP_Cpp_Final_project\\questions_Inh_Poly.txt");
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


void Inh_Poly::on_push4_clicked()
{
    flag_3 = 4;
    clear_radio_btn();
    QFile file("D:\\Learning_OOP_Cpp_Final_project\\questions_Inh_Poly.txt");
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


void Inh_Poly::on_push5_clicked()
{
    flag_3 = 5;
    clear_radio_btn();
    QFile file("D:\\Learning_OOP_Cpp_Final_project\\questions_Inh_Poly.txt");
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


void Inh_Poly::on_push6_clicked()
{
    flag_3 = 6;
    clear_radio_btn();
    QFile file("D:\\Learning_OOP_Cpp_Final_project\\questions_Inh_Poly.txt");
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


void Inh_Poly::on_push7_clicked()
{
    flag_3 = 7;
    clear_radio_btn();
    QFile file("D:\\Learning_OOP_Cpp_Final_project\\questions_Inh_Poly.txt");
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


void Inh_Poly::on_push8_clicked()
{
    flag_3 = 8;
    clear_radio_btn();
    QFile file("D:\\Learning_OOP_Cpp_Final_project\\questions_Inh_Poly.txt");
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


void Inh_Poly::on_push9_clicked()
{
    flag_3 = 9;
    clear_radio_btn();
    QFile file("D:\\Learning_OOP_Cpp_Final_project\\questions_Inh_Poly.txt");
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


void Inh_Poly::on_push10_clicked()
{
    flag_3 = 10;
    clear_radio_btn();
    QFile file("D:\\Learning_OOP_Cpp_Final_project\\questions_Inh_Poly.txt");
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


void Inh_Poly::on_check_2_clicked()
{
    QString answer;

    QFile file("D:\\Learning_OOP_Cpp_Final_project\\questions_class_object.txt");
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
if(answer==line[flag_3-1]){
    ui->ques_1->setText("Exactly");
}
else
{
    ui->ques_1->setText("Wrong");
}
}


void Inh_Poly::on_back_1_clicked()
{
    hide();
    ex_3 =new exercise(this);
    ex_3 -> show();
}

