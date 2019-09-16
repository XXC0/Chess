#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :QWidget(parent),ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_Chess = new Game;
    ui->stackedWidget->setCurrentWidget(ui->Select_page);
    this->setWindowFlag(Qt::FramelessWindowHint);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_Robot_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Role_page);
}

void Widget::on_pushButton_Exit_clicked()
{
    this->close();
}

void Widget::on_pushButton_Return_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Select_page);
}

void Widget::on_pushButton_Exit_2_clicked()
{
    this->close();
}

void Widget::on_pushButton_Black_Chess_clicked()
{
    this->hide();
    this->m_Chess->show();
    this->m_Chess->setTextLeft("我方棋子",Black,White);
}

void Widget::on_pushButton_White_Chess_clicked()
{
    this->hide();
    this->m_Chess->show();
    this->m_Chess->setTextRight("我方棋子",White,Black);
}
