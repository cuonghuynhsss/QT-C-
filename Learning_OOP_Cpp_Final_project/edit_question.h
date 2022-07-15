#ifndef EDIT_QUESTION_H
#define EDIT_QUESTION_H

#include <QMainWindow>
#include <QTextStream>
#include <QFile>
#include <QMessageBox>
#include <QString>
namespace Ui {
class Edit_question;
}

class Edit_question : public QMainWindow
{
    Q_OBJECT

public:
    explicit Edit_question(QWidget *parent = nullptr);
    ~Edit_question();

private slots:
    void on_Load_1_clicked();

    void on_Save_1_clicked();

    void on_Load_2_clicked();

    void on_Load_3_clicked();

    void on_Save_2_clicked();

    void on_Save_3_clicked();

private:
    Ui::Edit_question *ui;
};

#endif // EDIT_QUESTION_H
