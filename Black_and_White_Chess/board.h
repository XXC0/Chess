#ifndef BOARD_H
#define BOARD_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QPixmap>
#include <QPen>
#include <QDebug>


extern int m_array[8][8];
enum State{
    Empty,Black,White
};


class Board : public QWidget
{
    Q_OBJECT
public:
    explicit Board(QWidget *parent = nullptr);
public:
    void setInfo(int x,int y,int (*arr)[8]);
    void setChessColor(QString path);

protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
signals:
    void setCount(int x ,int y);
public slots:

private:
    QPainter *m_paint;
    QString m_PicPath;

    int m_x;
    int m_y;
    int m_width;
    int m_height;
};

#endif // BOARD_H
