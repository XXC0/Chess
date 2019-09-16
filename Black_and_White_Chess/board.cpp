#include "board.h"

int m_array[8][8] = {{0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0},
                     {0,0,0,1,2,0,0,0},
                     {0,0,0,2,1,0,0,0},
                     {0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0}};
int m_posx;
int m_posy;
int m_flag=0;


Board::Board(QWidget *parent) : QWidget(parent)
{

}

void Board::setInfo(int x,int y,int (*arr)[8])
{
    m_posx = x;
    m_posy = y;

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            m_array[i][j] = arr[i][j];
        }
    }
}

void Board::setChessColor(QString path)
{
    m_PicPath = path;
}

void Board::paintEvent(QPaintEvent *event)
{
    m_width = this->width()/10;
    m_height = this->height()/10;

    m_paint = new QPainter(this);
    m_paint->drawPixmap(m_width-10,m_height-10,
                        this->width()-2*m_width+20,
                        this->height()-2*m_height+20,
                        QPixmap(":/new/prefix1/Image/board.jpg"));

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(m_array[i][j] == White)
            {
                m_paint->drawPixmap((j+1)*m_width,(i+1)*m_height,m_width,m_height,QPixmap(":/new/prefix1/Image/white.png"));
            }
            else if (m_array[i][j] == Black)
            {
                m_paint->drawPixmap((j+1)*m_width,(i+1)*m_height,m_width,m_height,QPixmap(":/new/prefix1/Image/black.png"));
            }

        }
    }


    QPen m_pen;
    m_pen.setColor(QColor(255,255,0));
    m_pen.setWidth(5);
    m_paint->setPen(m_pen);
    if(m_flag != 1)
    {
        m_paint->drawRect((m_posy+1)*m_width,(m_posx+1)*m_height,m_width,m_height);
    }
    m_flag++;


    QPen pen;
    pen.setColor(QColor(0,0,0));
    pen.setWidth(2);

    m_paint->setPen(pen);
    for(int i=0;i<9;i++)
    {
        m_paint->drawLine(m_width,m_height+i*m_height,this->width()-m_width,m_height+i*m_height);//起点 x,y 终点 x,y
        m_paint->drawLine(m_width+i*m_width,m_height,m_width+i*m_width,this->height()-m_height);
    }

}

void Board::mousePressEvent(QMouseEvent *event)
{
    m_x=(event->x()/m_width)*m_width;
    m_y=(event->y()/m_height)*m_height;

    if(m_x >= m_width && m_y >= m_height &&
            m_x <= this->width()-(2*m_width) &&
            m_y <= this->height()-(2*m_height))
    {
        int temp_y = (event->x()-m_width)/m_width;
        int temp_x = (event->y()-m_height)/m_height;
        emit setCount(temp_x,temp_y);
    }
    this->update();
}
