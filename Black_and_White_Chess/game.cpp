#include "game.h"
#include "ui_game.h"
#include <QTime>

int dir[8][2]={{1,0},{1,-1},{0,-1},{-1,-1},
               {-1,0},{-1,1},{0,1},{1,1}};

int WhiteNumber;
int BlackNumber;
int EmptyNumber;
int CurrentPosX = 0;
int CurrentPosY = 0;

bool CurrentChessColor = false;
bool m_eatChesse = true;
bool ComputerPlayer;

int count=0;

State m_playerChessColor;
State m_ComputerPlayerColor;


Game::Game(QWidget *parent) :QWidget(parent),ui(new Ui::Game)
{
    ui->setupUi(this);

    m_num = 10;
    m_count = 0;
    m_Black = 0;
    m_White = 0;

    m_Board = new Board;
    m_Clock = new QTimer(this);

    ui->label_left->setText("对方黑子");
    ui->label_right->setText("对方白子");

    ui->lcdNumber_Left->display(2);
    ui->lcdNumber_Right->display(2);

    connect(m_Clock,&QTimer::timeout,this,&Game::start);
    connect(ui->widget,&Board::setCount,this,&Game::getCoordinate);

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            m_Array[i][j] = Empty;
        }
    }

    m_Array[3][3] = Black;
    m_Array[4][4] = Black;

    m_Array[4][3] = White;
    m_Array[3][4] = White;

}

Game::~Game()
{
    delete ui;
}

void Game::setTextLeft(QString m_text,State playerChessColor,State ComputerPlayerColor)
{
    ui->label_left->setText(m_text);
    m_playerChessColor = playerChessColor;
    m_ComputerPlayerColor = ComputerPlayerColor;
    m_Clock->start(1000);
}

void Game::setTextRight(QString m_text,State playerChessColor,State ComputerPlayerColor)
{
    ui->label_right->setText(m_text);
    m_playerChessColor = playerChessColor;
    m_ComputerPlayerColor = ComputerPlayerColor;
    m_Clock->start(1000);
}

void Game::paintEvent(QPaintEvent *event)
{
    m_paint = new QPainter(this);
    m_paint->drawPixmap(0,0,this->width(),this->height(),QPixmap(":/new/prefix1/Image/bg1.jpg"));
}

void Game::getCoordinate(int x,int y)
{
    CurrentPosX = x;
    CurrentPosY = y;
    if(judgeRule(CurrentPosX,CurrentPosY,8,m_Array,m_playerChessColor,true))
    {
        this->m_Board->setInfo(CurrentPosX,CurrentPosY,m_Array);
        CurrentChessColor = !CurrentChessColor;
    }
    Lose_and_Win();
    ui->label_left->show();
    ui->label_right->hide();
    m_num =10;

    this->update();

}

int Game::judgeRule(int x, int y, int gridNum, void *chess, State currentRole,bool eatChess)
{
    int temp_x = x, temp_y = y;
    int i = 0, eatNum = 0;
    typedef int (*PARRAY)[gridNum];
    PARRAY chessBoard = PARRAY(chess);
    if(chessBoard[temp_x][temp_y] != Empty)
        return 0;

    for(i = 0 ; i <8; i++)
    {
        temp_x += dir[i][0]; temp_y += dir[i][1];
        if((temp_x < gridNum && temp_x >=0 && temp_y < gridNum && temp_y >= 0)
            && (chessBoard[temp_x][temp_y] != currentRole) && (chessBoard[temp_x][temp_y] != Empty) )
        {
            temp_x += dir[i][0]; temp_y += dir[i][1];
            while(temp_x < gridNum && temp_x >=0 && temp_y < gridNum && temp_y >= 0)
            {
                if(chessBoard[temp_x][temp_y] == Empty)
                        break;
                if(chessBoard[temp_x][temp_y] == currentRole)
                {
                    if(eatChess == true)
                    {

                        chessBoard[x][y] = currentRole;
                        temp_x -= dir[i][0]; temp_y -= dir[i][1];
                        while((temp_x != x )||(temp_y != y))
                        {
                            chessBoard[temp_x][temp_y] = currentRole;
                            temp_x -= dir[i][0]; temp_y -= dir[i][1];
                            eatNum ++;
                        }
                    }
                    else
                    {

                        temp_x -= dir[i][0]; temp_y -= dir[i][1];
                        while((temp_x != x )||(temp_y != y))
                        {
                            temp_x -= dir[i][0]; temp_y -= dir[i][1];
                            eatNum ++;
                        }
                    }
                    break;
                }
                temp_x += dir[i][0]; temp_y += dir[i][1];
            }
        }
        temp_x = x; temp_y = y;
    }

    return eatNum;
}

void Game::machinePlay()
{
    m_Clock->stop();


    int max = 0;
    int px = -1, py = -1;
    for(int i = 0; i < 8; ++i)
    {
        for(int j = 0; j < 8; ++j)
        {
            int num = judgeRule(i, j, 8, m_Array, m_ComputerPlayerColor,false);
            if(num > 0)
            {
                if(
                    (i == 0 && j == 0) ||
                    (i == 7 && j == 0) ||
                    (i == 0 && j == 7) ||
                    (i == 7 && j == 7)  )
                {
                    px = i;
                    py = j;
                    goto End;
                }

                if(max < num)
                {
                    px = i;
                    py = j;
                    max = num;
                }
            }
        }
    }

End:
    if(px == -1)
    {
        CurrentChessColor = !CurrentChessColor;
        return;
    }

    //机器吃子
    judgeRule(px, py, 8, m_Array, m_ComputerPlayerColor,true);
    ui->widget->setInfo(px,py,m_Array);
}

void Game::start()
{

    m_Clock->stop();

    if(count == 0 && m_ComputerPlayerColor == Black)
        CurrentChessColor = !CurrentChessColor;
    count++;
    if(m_num < 0){

        m_num = 10;
        ui->widget->update();
        CurrentChessColor = !CurrentChessColor;
    }

    ui->lcdNumber_Colck->display(m_num);
    m_num--;
    if(CurrentChessColor == true)
    {
        ui->widget->update();
        m_Clock->stop();
        machinePlay();
        Lose_and_Win();
        ui->label_left->hide();
        ui->label_right->show();
        CurrentChessColor = !CurrentChessColor;
    }
    m_Clock->start(1000);
}

void Game::ChessNumber()
{
    WhiteNumber = 0;
    BlackNumber = 0;
    EmptyNumber = 0;

    for(int i = 0;i < 8; i++)
    {
         for(int j = 0; j< 8; j++)
         {
             switch(m_Array[i][j])
             {
             case Empty:
                 EmptyNumber++;
                 break;
             case White:
                 WhiteNumber++;
                 break;
             case Black:
                 BlackNumber++;
                 break;
             default:
                 break;
             }
         }
    }
    ui->lcdNumber_Left->display(BlackNumber);
    ui->lcdNumber_Right->display(WhiteNumber);
}

void Game::Lose_and_Win()
{
    ChessNumber();
    if(EmptyNumber == 0)
    {
        if(WhiteNumber > BlackNumber)
        {
            QMessageBox::information(this,
                                      "Author by wenhao",
                                      tr("恭喜白方获胜\n白方:%1,黑方:%2").arg(WhiteNumber).arg(BlackNumber),
                                      QMessageBox::Yes);
           }
        else if(WhiteNumber < BlackNumber)
        {
            QMessageBox::information(this,
                                          "Author by wenhao",
                                          tr("恭喜黑方获胜\n黑方:%1,白方:%2").arg(BlackNumber).arg(WhiteNumber),
                                          QMessageBox::Yes);
        }
        else
        {
            QMessageBox::information(this,
                                          "Author by wenhao",
                                          tr("你们打成了平手!\n黑方:%1,白方:%2").arg(BlackNumber).arg(WhiteNumber),
                                          QMessageBox::Yes);
        }
    }
    else
    {
        if(BlackNumber==0)
        {
            QMessageBox::information(this,
                                      "Author by wenhao",
                                      tr("恭喜白方获胜\n白方:%1,黑方:%2").arg(WhiteNumber).arg(BlackNumber),
                                      QMessageBox::Yes);
           }
        else if(WhiteNumber==0)
        {
            QMessageBox::information(this,
                                          "Author by wenhao",
                                          tr("恭喜黑方获胜\n黑方:%1,白方:%2").arg(BlackNumber).arg(WhiteNumber),
                                          QMessageBox::Yes);
        }

    }

}



