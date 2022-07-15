#ifndef EXERCISE_H
#define EXERCISE_H

#include <QMainWindow>
#include <QPropertyAnimation>
#include <QTextStream>
namespace Ui {
class exercise;
}

class exercise : public QMainWindow
{
    Q_OBJECT

public:
    explicit exercise(QWidget *parent = nullptr);
    ~exercise();

private slots:
    void on_home_e_clicked();

    void on_general_e_clicked();

    void on_about_e_clicked();

    void on_exit_clicked();

    void on_menu_o_c_clicked();

    void on_class_object_clicked();

    void on_Edit_ques_clicked();

    void on_more_class_clicked();

    void on_Inh_Poly_clicked();

private:
    Ui::exercise *ui;
};

#endif // EXERCISE_H
