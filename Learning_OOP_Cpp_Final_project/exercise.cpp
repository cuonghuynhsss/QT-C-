#include "exercise.h"
#include "ui_exercise.h"
#include <home.h>
#include <general.h>
#include<class_and_object.h>
#include <edit_question.h>
#include <more_on_class.h>
#include <inh_poly.h>
Home *h_e;
general *g_e;
Class_and_Object *C_O;
Edit_question *edit_q;
More_on_class *more;
Inh_Poly *i_p;
exercise::exercise(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::exercise)
{
    ui->setupUi(this);
}

exercise::~exercise()
{
    delete ui;
}

void exercise::on_home_e_clicked()
{
    hide();
    h_e =new Home(this);
    h_e -> show();
}


void exercise::on_general_e_clicked()
{
    hide();
    g_e =new general(this);
    g_e -> show();
}


void exercise::on_about_e_clicked()
{
     QMessageBox::about(this,"About","HCMUTE - HUYNH CHI CUONG - KMT - 19119157");
}


void exercise::on_exit_clicked()
{
        exit(EXIT_FAILURE);
}


void exercise::on_menu_o_c_clicked()
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


void exercise::on_class_object_clicked()
{
    hide();
    C_O =new Class_and_Object(this);
    C_O -> show();
}


void exercise::on_Edit_ques_clicked()
{
    edit_q =new Edit_question(this);
    edit_q -> show();
}


void exercise::on_more_class_clicked()
{
    hide();
    more =new More_on_class(this);
    more -> show();
}


void exercise::on_Inh_Poly_clicked()
{
    hide();
    i_p =new Inh_Poly(this);
    i_p -> show();
}

