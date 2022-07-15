#ifndef INH_POLY_H
#define INH_POLY_H

#include <QMainWindow>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
namespace Ui {
class Inh_Poly;
}

class Inh_Poly : public QMainWindow
{
    Q_OBJECT

public:
    explicit Inh_Poly(QWidget *parent = nullptr);
    ~Inh_Poly();
    void clear_radio_btn(void);
private slots:
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

    void on_check_2_clicked();

    void on_back_1_clicked();

private:
    Ui::Inh_Poly *ui;
};

#endif // INH_POLY_H
