#include "home.h"
#include "ui_home.h"

Home::Home(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Home)
{
    ui->setupUi(this);
}

Home::~Home()
{
    delete ui;
}


void Home::on_general_h_clicked()
{
    hide();
    ge = new general(this);
    ge -> show();
}


void Home::on_exercise_h_clicked()
{
    hide();
    ex = new exercise(this);
    ex -> show();
}


void Home::on_about_h_clicked()
{
     QMessageBox::about(this,"About","HCMUTE - HUYNH CHI CUONG - KMT - 19119157");
}


void Home::on_exit_h_clicked()
{
        exit(EXIT_FAILURE);
}


void Home::on_menu_o_c_clicked()
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


void Home::on_facebook_clicked()
{
    QString link = "https://www.facebook.com/cuonghuynhcf";
    QDesktopServices::openUrl(QUrl(link));

}
void Home::on_youtube_clicked()
{
    QString link = "https://www.youtube.com/playlist?list=PLS1QulWo1RIZiBcTr5urECberTITj7gjA";
    QDesktopServices::openUrl(QUrl(link));
}


void Home::on_github_clicked()
{
    QString link = "https://github.com/cuonghuynhsss/OOP_Cpp";
    QDesktopServices::openUrl(QUrl(link));
}


void Home::on_gg_drive_clicked()
{

    QString link = "https://drive.google.com/drive/folders/1dZ18yrXIyPP_CO1CLIdeWoEmsAaz0Ty1?usp=sharing";
    QDesktopServices::openUrl(QUrl(link));
}

