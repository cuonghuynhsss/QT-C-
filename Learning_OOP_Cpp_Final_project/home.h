#ifndef HOME_H
#define HOME_H

#include <QMainWindow>
#include <QPropertyAnimation>
#include <QMessageBox>
#include <general.h>
#include <exercise.h>
#include <QDesktopServices>
#include <QUrl>
#include <QTextStream>
QT_BEGIN_NAMESPACE
namespace Ui { class Home; }
QT_END_NAMESPACE

class Home : public QMainWindow
{
    Q_OBJECT

public:
    Home(QWidget *parent = nullptr);
    ~Home();

private slots:
    void on_general_h_clicked();

    void on_exercise_h_clicked();

    void on_about_h_clicked();

    void on_exit_h_clicked();

    void on_menu_o_c_clicked();

    void on_facebook_clicked();

    void on_youtube_clicked();

    void on_github_clicked();

    void on_gg_drive_clicked();

private:
    Ui::Home *ui;
    general *ge;
    exercise *ex;
};
#endif // HOME_H
