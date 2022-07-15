#ifndef GENERAL_H
#define GENERAL_H

#include <QMainWindow>
#include <QPropertyAnimation>
#include <QTextStream>
#include <QFile>
namespace Ui {
class general;
}

class general : public QMainWindow
{
    Q_OBJECT

public:
    explicit general(QWidget *parent = nullptr);
    ~general();

private slots:
    void on_home_g_clicked();

    void on_exercise_g_clicked();

    void on_about_g_clicked();

    void on_exit_clicked();

    void on_menu_o_c_clicked();

    void on_func_ge_clicked();

    void on_arr_ge_clicked();

    void on_pointer_ge_clicked();

    void on_Class_ge_clicked();

    void on_Inh_ge_clicked();

    void on_Poly_ge_clicked();

private:
    Ui::general *ui;
};

#endif // GENERAL_H
