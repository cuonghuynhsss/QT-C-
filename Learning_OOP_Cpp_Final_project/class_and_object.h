#ifndef CLASS_AND_OBJECT_H
#define CLASS_AND_OBJECT_H

#include <QMainWindow>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
namespace Ui {
class Class_and_Object;
}

class Class_and_Object : public QMainWindow
{
    Q_OBJECT

public:
    explicit Class_and_Object(QWidget *parent = nullptr);
    ~Class_and_Object();
    void clear_radio_btn(void);

private slots:
    void on_back_1_clicked();

    void on_check_1_clicked();

    void on_push1_clicked();

    void on_push2_clicked();

    void on_push3_clicked();

    void on_push4_clicked();

    void on_push5_clicked();

    void on_push6_clicked();

    void on_push7_clicked();

    void on_push8_clicked();

    void on_push9_clicked();

    void on_push10_clicked();

private:
    Ui::Class_and_Object *ui;
};

#endif // CLASS_AND_OBJECT_H
