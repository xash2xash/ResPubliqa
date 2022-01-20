/********************************************************************************
** Form generated from reading UI file 'csrow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSROW_H
#define UI_CSROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSRow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *info;
    QHBoxLayout *horizontalLayout_3;
    QWidget *container;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelName;
    QSpacerItem *horizontalSpacer;
    QLabel *labelAmount;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelAddress;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelStaking;
    QPushButton *pushButtonMenu;
    QLabel *lblDivisory;

    void setupUi(QWidget *CSRow)
    {
        if (CSRow->objectName().isEmpty())
            CSRow->setObjectName(QStringLiteral("CSRow"));
        CSRow->resize(401, 75);
        verticalLayout = new QVBoxLayout(CSRow);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 10, 20, 0);
        info = new QWidget(CSRow);
        info->setObjectName(QStringLiteral("info"));
        info->setMinimumSize(QSize(0, 0));
        horizontalLayout_3 = new QHBoxLayout(info);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 10);
        container = new QWidget(info);
        container->setObjectName(QStringLiteral("container"));
        container->setMinimumSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(container);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelName = new QLabel(container);
        labelName->setObjectName(QStringLiteral("labelName"));

        horizontalLayout->addWidget(labelName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelAmount = new QLabel(container);
        labelAmount->setObjectName(QStringLiteral("labelAmount"));

        horizontalLayout->addWidget(labelAmount);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelAddress = new QLabel(container);
        labelAddress->setObjectName(QStringLiteral("labelAddress"));

        horizontalLayout_2->addWidget(labelAddress);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        labelStaking = new QLabel(container);
        labelStaking->setObjectName(QStringLiteral("labelStaking"));

        horizontalLayout_2->addWidget(labelStaking);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addWidget(container);

        pushButtonMenu = new QPushButton(info);
        pushButtonMenu->setObjectName(QStringLiteral("pushButtonMenu"));
        pushButtonMenu->setMinimumSize(QSize(24, 24));
        pushButtonMenu->setMaximumSize(QSize(32, 32));
        pushButtonMenu->setFocusPolicy(Qt::NoFocus);
        pushButtonMenu->setStyleSheet(QStringLiteral("border:none; background-color:transparent;"));
        QIcon icon;
        icon.addFile(QStringLiteral("://ic-menu-hover"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMenu->setIcon(icon);
        pushButtonMenu->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(pushButtonMenu, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout->addWidget(info);

        lblDivisory = new QLabel(CSRow);
        lblDivisory->setObjectName(QStringLiteral("lblDivisory"));
        lblDivisory->setMinimumSize(QSize(0, 1));
        lblDivisory->setMaximumSize(QSize(16777215, 1));
        lblDivisory->setStyleSheet(QStringLiteral("background-color:#bababa;"));
        lblDivisory->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(lblDivisory);


        retranslateUi(CSRow);

        QMetaObject::connectSlotsByName(CSRow);
    } // setupUi

    void retranslateUi(QWidget *CSRow)
    {
        CSRow->setWindowTitle(QApplication::translate("CSRow", "Form", Q_NULLPTR));
        labelName->setText(QApplication::translate("CSRow", "Savings", Q_NULLPTR));
        labelAmount->setText(QApplication::translate("CSRow", "0,00 RSQ", Q_NULLPTR));
        labelAddress->setText(QApplication::translate("CSRow", "address", Q_NULLPTR));
        labelStaking->setText(QApplication::translate("CSRow", "Not Staking", Q_NULLPTR));
        pushButtonMenu->setText(QString());
        lblDivisory->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CSRow: public Ui_CSRow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSROW_H
