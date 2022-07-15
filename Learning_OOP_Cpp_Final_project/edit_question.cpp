#include "edit_question.h"
#include "ui_edit_question.h"

Edit_question::Edit_question(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Edit_question)
{
    ui->setupUi(this);
}

Edit_question::~Edit_question()
{
    delete ui;
}

void Edit_question::on_Load_1_clicked()
{
        QFile file("D:\\Learning_OOP_Cpp_Final_project\\questions_class_object.txt");
        if (!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
         ui->textEdit->setText(in.readAll());

         file.close();
}


void Edit_question::on_Save_1_clicked()
{
     QFile file("D:\\Learning_OOP_Cpp_Final_project\\questions_class_object.txt");
     QTextStream out(&file);
     if (!file.open(QIODevice::WriteOnly))
         QMessageBox::information(0,"info",file.errorString());
    QString str = ui->textEdit->toPlainText();
    out << str;
      file.close();
}


void Edit_question::on_Load_2_clicked()
{
    QFile file("D:\\Learning_OOP_Cpp_Final_project\\questions_more_class.txt");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
     ui->textEdit->setText(in.readAll());

     file.close();
}


void Edit_question::on_Load_3_clicked()
{
    QFile file("D:\\Learning_OOP_Cpp_Final_project\\questions_Inh_Poly.txt");
    if (!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
     ui->textEdit->setText(in.readAll());

     file.close();
}


void Edit_question::on_Save_2_clicked()
{
    QFile file("D:\\Learning_OOP_Cpp_Final_project\\questions_more_class.txt");
    QTextStream out(&file);
    if (!file.open(QIODevice::WriteOnly))
        QMessageBox::information(0,"info",file.errorString());
   QString str = ui->textEdit->toPlainText();
   out << str;
     file.close();
}


void Edit_question::on_Save_3_clicked()
{
    QFile file("D:\\Learning_OOP_Cpp_Final_project\\questions_Inh_Poly.txt");
    QTextStream out(&file);
    if (!file.open(QIODevice::WriteOnly))
        QMessageBox::information(0,"info",file.errorString());
   QString str = ui->textEdit->toPlainText();
   out << str;
     file.close();
}

