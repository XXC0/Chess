#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTime>
#include "game.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_Robot_clicked();

    void on_pushButton_Exit_clicked();

    void on_pushButton_Return_clicked();

    void on_pushButton_Exit_2_clicked();

    void on_pushButton_Black_Chess_clicked();

    void on_pushButton_White_Chess_clicked();

private:
    Ui::Widget *ui;
    Game *m_Chess;
};

#endif // WIDGET_H
