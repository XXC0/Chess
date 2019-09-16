/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "board.h"

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QGridLayout *gridLayout;
    Board *widget;
    QLabel *label_left;
    QLCDNumber *lcdNumber_Colck;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLCDNumber *lcdNumber_Right;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QLCDNumber *lcdNumber_Left;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_right;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName(QStringLiteral("Game"));
        Game->resize(636, 530);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Image/chess.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Game->setWindowIcon(icon);
        Game->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        gridLayout = new QGridLayout(Game);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new Board(Game);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(400, 400));

        gridLayout->addWidget(widget, 2, 1, 4, 3);

        label_left = new QLabel(Game);
        label_left->setObjectName(QStringLiteral("label_left"));
        label_left->setMinimumSize(QSize(30, 30));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        label_left->setFont(font);

        gridLayout->addWidget(label_left, 0, 0, 1, 1);

        lcdNumber_Colck = new QLCDNumber(Game);
        lcdNumber_Colck->setObjectName(QStringLiteral("lcdNumber_Colck"));
        lcdNumber_Colck->setMinimumSize(QSize(100, 60));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        lcdNumber_Colck->setFont(font1);
        lcdNumber_Colck->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(lcdNumber_Colck, 0, 2, 2, 1);

        horizontalSpacer_4 = new QSpacerItem(95, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 5, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(155, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 119, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        lcdNumber_Right = new QLCDNumber(Game);
        lcdNumber_Right->setObjectName(QStringLiteral("lcdNumber_Right"));
        lcdNumber_Right->setMinimumSize(QSize(50, 70));
        lcdNumber_Right->setFont(font1);
        lcdNumber_Right->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(lcdNumber_Right, 2, 4, 1, 1);

        label_5 = new QLabel(Game);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(50, 50));
        label_5->setMaximumSize(QSize(50, 50));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Image/black.png")));
        label_5->setScaledContents(true);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 119, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 4, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(156, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        lcdNumber_Left = new QLCDNumber(Game);
        lcdNumber_Left->setObjectName(QStringLiteral("lcdNumber_Left"));
        lcdNumber_Left->setMinimumSize(QSize(50, 70));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(22);
        lcdNumber_Left->setFont(font2);
        lcdNumber_Left->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(lcdNumber_Left, 2, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(17, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 6, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(17, 135, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 0, 1, 1);

        label_3 = new QLabel(Game);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(50, 50));
        label_3->setMaximumSize(QSize(50, 50));
        label_3->setTextFormat(Qt::AutoText);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Image/white.png")));
        label_3->setScaledContents(true);

        gridLayout->addWidget(label_3, 3, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(96, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 5, 0, 1, 1);

        label_right = new QLabel(Game);
        label_right->setObjectName(QStringLiteral("label_right"));
        label_right->setMinimumSize(QSize(30, 30));
        label_right->setFont(font);

        gridLayout->addWidget(label_right, 0, 4, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 119, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 4, 1, 1);


        retranslateUi(Game);

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QWidget *Game)
    {
        Game->setWindowTitle(QApplication::translate("Game", "Game", Q_NULLPTR));
        label_left->setText(QApplication::translate("Game", "TextLabel", Q_NULLPTR));
        label_5->setText(QString());
        label_3->setText(QString());
        label_right->setText(QApplication::translate("Game", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
