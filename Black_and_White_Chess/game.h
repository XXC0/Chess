#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QPainter>
#include <QMessageBox>
#include <QTimer>
#include "board.h"

extern int dir[8][2];
extern int WhiteNumber;
extern int BlackNumber;
extern int EmptyNumber;


namespace Ui {
class Game;
}

class Game : public QWidget
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = 0);
    ~Game();

public:
    void setTextLeft(QString m_text,State playerChessColor,State ComputerPlayerColor);
    void setTextRight(QString m_text,State playerChessColor,State ComputerPlayerColor);

protected:
    void paintEvent(QPaintEvent *event);

private slots:
    void getCoordinate(int x,int y);
signals:

private:
    int judgeRule(int x, int y, int gridNum, void *chess, State currentRole,bool eatChess);
    void machinePlay();
    void ShowChess();
    void start();
    void ChessNumber();
    void Lose_and_Win();


private:
    Ui::Game *ui;
    QPainter *m_paint;
    QTimer *m_Clock;
    int m_count;
    double m_num;
    Board *m_Board;
    int m_Black ;
    int m_White;
    int m_Array[8][8];

};

#endif // GAME_H
