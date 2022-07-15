#ifndef MORE_ON_CLASS_H
#define MORE_ON_CLASS_H

#include <QMainWindow>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
namespace Ui {
class More_on_class;
}

class More_on_class : public QMainWindow
{
    Q_OBJECT

public:
    explicit More_on_class(QWidget *parent = nullptr);
    ~More_on_class();
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

    void on_check_1_clicked();

    void on_back_1_clicked();

private:
    Ui::More_on_class *ui;
};

#endif // MORE_ON_CLASS_H
