/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *Select_page;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_Exit;
    QPushButton *pushButton_Robot;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_Internet;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_6;
    QWidget *Role_page;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_Return;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Exit_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *pushButton_Black_Chess;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButton_White_Chess;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(500, 400);
        Widget->setMinimumSize(QSize(500, 400));
        Widget->setMaximumSize(QSize(500, 400));
        Widget->setStyleSheet(QLatin1String("background-image: url(:/new/prefix1/Image/bk.jpg);\n"
"background-image: url(:/new/prefix1/Image/backgroud.png);"));
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 500, 400));
        stackedWidget->setMinimumSize(QSize(500, 400));
        stackedWidget->setMaximumSize(QSize(500, 400));
        Select_page = new QWidget();
        Select_page->setObjectName(QStringLiteral("Select_page"));
        gridLayout = new QGridLayout(Select_page);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton = new QPushButton(Select_page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(30, 20));
        pushButton->setIconSize(QSize(35, 20));
        pushButton->setFlat(true);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(117, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 0, 1, 1, 3);

        label = new QLabel(Select_page);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(200, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(18);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 4, 1, 2);

        horizontalSpacer_9 = new QSpacerItem(84, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 0, 6, 1, 2);

        pushButton_Exit = new QPushButton(Select_page);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        sizePolicy.setHeightForWidth(pushButton_Exit->sizePolicy().hasHeightForWidth());
        pushButton_Exit->setSizePolicy(sizePolicy);
        pushButton_Exit->setMinimumSize(QSize(30, 20));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Image/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Exit->setIcon(icon);
        pushButton_Exit->setIconSize(QSize(35, 20));
        pushButton_Exit->setFlat(true);

        gridLayout->addWidget(pushButton_Exit, 0, 8, 1, 1);

        pushButton_Robot = new QPushButton(Select_page);
        pushButton_Robot->setObjectName(QStringLiteral("pushButton_Robot"));
        sizePolicy.setHeightForWidth(pushButton_Robot->sizePolicy().hasHeightForWidth());
        pushButton_Robot->setSizePolicy(sizePolicy);
        pushButton_Robot->setMinimumSize(QSize(120, 150));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/Image/machine.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Robot->setIcon(icon1);
        pushButton_Robot->setIconSize(QSize(120, 150));
        pushButton_Robot->setFlat(true);

        gridLayout->addWidget(pushButton_Robot, 1, 1, 3, 3);

        verticalSpacer = new QSpacerItem(20, 134, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 4, 1, 1);

        pushButton_Internet = new QPushButton(Select_page);
        pushButton_Internet->setObjectName(QStringLiteral("pushButton_Internet"));
        sizePolicy.setHeightForWidth(pushButton_Internet->sizePolicy().hasHeightForWidth());
        pushButton_Internet->setSizePolicy(sizePolicy);
        pushButton_Internet->setMinimumSize(QSize(120, 150));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/Image/network.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Internet->setIcon(icon2);
        pushButton_Internet->setIconSize(QSize(120, 150));
        pushButton_Internet->setFlat(true);

        gridLayout->addWidget(pushButton_Internet, 1, 5, 3, 3);

        horizontalSpacer_4 = new QSpacerItem(27, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(155, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(27, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 8, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 134, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 4, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(57, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 4, 0, 1, 2);

        label_2 = new QLabel(Select_page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(60, 25));
        label_2->setMaximumSize(QSize(16777215, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 4, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(185, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 4, 3, 1, 2);

        label_3 = new QLabel(Select_page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(90, 25));
        label_3->setMaximumSize(QSize(16777215, 20));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 4, 5, 1, 2);

        horizontalSpacer_6 = new QSpacerItem(71, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 4, 7, 1, 2);

        stackedWidget->addWidget(Select_page);
        pushButton_Robot->raise();
        pushButton->raise();
        pushButton_Exit->raise();
        label->raise();
        pushButton_Internet->raise();
        label_3->raise();
        label_2->raise();
        Role_page = new QWidget();
        Role_page->setObjectName(QStringLiteral("Role_page"));
        gridLayout_2 = new QGridLayout(Role_page);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_Return = new QPushButton(Role_page);
        pushButton_Return->setObjectName(QStringLiteral("pushButton_Return"));
        sizePolicy.setHeightForWidth(pushButton_Return->sizePolicy().hasHeightForWidth());
        pushButton_Return->setSizePolicy(sizePolicy);
        pushButton_Return->setMinimumSize(QSize(30, 25));
        pushButton_Return->setMaximumSize(QSize(30, 25));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/Image/back2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Return->setIcon(icon3);
        pushButton_Return->setIconSize(QSize(30, 25));
        pushButton_Return->setFlat(true);

        gridLayout_2->addWidget(pushButton_Return, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(86, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        label_4 = new QLabel(Role_page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(160, 50));
        label_4->setFont(font);

        gridLayout_2->addWidget(label_4, 0, 2, 1, 3);

        horizontalSpacer = new QSpacerItem(85, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 5, 1, 1);

        pushButton_Exit_2 = new QPushButton(Role_page);
        pushButton_Exit_2->setObjectName(QStringLiteral("pushButton_Exit_2"));
        sizePolicy.setHeightForWidth(pushButton_Exit_2->sizePolicy().hasHeightForWidth());
        pushButton_Exit_2->setSizePolicy(sizePolicy);
        pushButton_Exit_2->setMinimumSize(QSize(30, 25));
        pushButton_Exit_2->setMaximumSize(QSize(30, 25));
        pushButton_Exit_2->setIcon(icon);
        pushButton_Exit_2->setIconSize(QSize(30, 25));
        pushButton_Exit_2->setFlat(true);

        gridLayout_2->addWidget(pushButton_Exit_2, 0, 6, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 82, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 1, 2, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(86, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_12, 2, 0, 1, 1);

        pushButton_Black_Chess = new QPushButton(Role_page);
        pushButton_Black_Chess->setObjectName(QStringLiteral("pushButton_Black_Chess"));
        sizePolicy.setHeightForWidth(pushButton_Black_Chess->sizePolicy().hasHeightForWidth());
        pushButton_Black_Chess->setSizePolicy(sizePolicy);
        pushButton_Black_Chess->setMinimumSize(QSize(80, 70));
        pushButton_Black_Chess->setMaximumSize(QSize(80, 70));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/Image/black.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Black_Chess->setIcon(icon4);
        pushButton_Black_Chess->setIconSize(QSize(80, 70));
        pushButton_Black_Chess->setFlat(true);

        gridLayout_2->addWidget(pushButton_Black_Chess, 2, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(89, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_11, 2, 2, 1, 1);

        pushButton_White_Chess = new QPushButton(Role_page);
        pushButton_White_Chess->setObjectName(QStringLiteral("pushButton_White_Chess"));
        sizePolicy.setHeightForWidth(pushButton_White_Chess->sizePolicy().hasHeightForWidth());
        pushButton_White_Chess->setSizePolicy(sizePolicy);
        pushButton_White_Chess->setMinimumSize(QSize(80, 70));
        pushButton_White_Chess->setMaximumSize(QSize(80, 70));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/Image/white.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_White_Chess->setIcon(icon5);
        pushButton_White_Chess->setIconSize(QSize(80, 70));
        pushButton_White_Chess->setFlat(true);

        gridLayout_2->addWidget(pushButton_White_Chess, 2, 3, 1, 2);

        horizontalSpacer_13 = new QSpacerItem(74, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_13, 2, 5, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 3, 2, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(86, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_15, 4, 0, 1, 1);

        label_5 = new QLabel(Role_page);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(60, 40));
        label_5->setMaximumSize(QSize(60, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(14);
        label_5->setFont(font2);

        gridLayout_2->addWidget(label_5, 4, 1, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(109, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_14, 4, 2, 1, 2);

        label_7 = new QLabel(Role_page);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(60, 40));
        label_7->setMaximumSize(QSize(60, 40));
        label_7->setFont(font2);

        gridLayout_2->addWidget(label_7, 4, 4, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(85, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_16, 4, 5, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 82, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 5, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 82, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_6, 5, 4, 1, 1);

        stackedWidget->addWidget(Role_page);

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        pushButton->setText(QString());
        label->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\346\270\270\346\210\217\346\250\241\345\274\217", Q_NULLPTR));
        pushButton_Exit->setText(QString());
        pushButton_Robot->setText(QString());
        pushButton_Internet->setText(QString());
        label_2->setText(QApplication::translate("Widget", "\344\272\272\346\234\272\345\257\271\346\210\230", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\347\275\221\347\273\234\345\257\271\346\210\230", Q_NULLPTR));
        pushButton_Return->setText(QString());
        label_4->setText(QApplication::translate("Widget", "\351\200\211\346\213\251\350\247\222\350\211\262", Q_NULLPTR));
        pushButton_Exit_2->setText(QString());
        pushButton_Black_Chess->setText(QString());
        pushButton_White_Chess->setText(QString());
        label_5->setText(QApplication::translate("Widget", "\351\273\221\346\243\213", Q_NULLPTR));
        label_7->setText(QApplication::translate("Widget", "\347\231\275\346\243\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
