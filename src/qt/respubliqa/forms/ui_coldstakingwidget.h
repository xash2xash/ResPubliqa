/********************************************************************************
** Form generated from reading UI file 'coldstakingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLDSTAKINGWIDGET_H
#define UI_COLDSTAKINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/respubliqa/optionbutton.h"

QT_BEGIN_NAMESPACE

class Ui_ColdStakingWidget
{
public:
    QHBoxLayout *horizontalLayout_1;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayoutTop;
    QWidget *containerTitle;
    QHBoxLayout *containerTitleLayout;
    QVBoxLayout *verticalLayout11;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QSpacerItem *horizontalSpacer;
    QWidget *containerViewPrivacyChecks;
    QVBoxLayout *containerPrivacyChecks;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2_1;
    QPushButton *pushLeft;
    QPushButton *pushRight;
    QLabel *labelSubtitle2;
    QSpacerItem *verticalSpacer_2;
    QWidget *containerSend;
    QVBoxLayout *containerSendRow;
    QLabel *labelEditTitle;
    QSpacerItem *verticalSpacer_6;
    QWidget *containerOwner;
    QVBoxLayout *vContainerOwner;
    QLabel *labelSubtitleDescription;
    QLineEdit *lineEditOwnerAddress;
    QSpacerItem *verticalSpacer_3;
    QWidget *containerBtn;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonClear;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonSend;
    QWidget *containerHistoryLabel;
    QHBoxLayout *horizontalLayout_4;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout_58;
    QLabel *labelListHistory;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labelStakingTotal;
    QVBoxLayout *verticalLayout_64;
    QSpacerItem *verticalSpacer_44;
    QListView *listView;
    QFrame *emptyContainer;
    QVBoxLayout *verticalLayout_71;
    QSpacerItem *verticalSpacer;
    QFrame *emptyScreen;
    QVBoxLayout *verticalLayout;
    QPushButton *pushImgEmpty;
    QLabel *labelEmpty;
    QWidget *right;
    QVBoxLayout *rightContainer;
    QWidget *containerRightButtons;
    QVBoxLayout *verticalLayout_4;
    OptionButton *btnCoinControl;
    OptionButton *btnColdStaking;
    OptionButton *btnMyStakingAddresses;
    QListView *listViewStakingAddress;

    void setupUi(QWidget *ColdStakingWidget)
    {
        if (ColdStakingWidget->objectName().isEmpty())
            ColdStakingWidget->setObjectName(QStringLiteral("ColdStakingWidget"));
        ColdStakingWidget->resize(629, 549);
        horizontalLayout_1 = new QHBoxLayout(ColdStakingWidget);
        horizontalLayout_1->setSpacing(0);
        horizontalLayout_1->setObjectName(QStringLiteral("horizontalLayout_1"));
        horizontalLayout_1->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(ColdStakingWidget);
        left->setObjectName(QStringLiteral("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayoutTop = new QVBoxLayout();
        verticalLayoutTop->setSpacing(0);
        verticalLayoutTop->setObjectName(QStringLiteral("verticalLayoutTop"));
        verticalLayoutTop->setContentsMargins(20, -1, 20, -1);
        containerTitle = new QWidget(left);
        containerTitle->setObjectName(QStringLiteral("containerTitle"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(containerTitle->sizePolicy().hasHeightForWidth());
        containerTitle->setSizePolicy(sizePolicy);
        containerTitle->setMaximumSize(QSize(16777215, 100));
        containerTitleLayout = new QHBoxLayout(containerTitle);
        containerTitleLayout->setSpacing(0);
        containerTitleLayout->setObjectName(QStringLiteral("containerTitleLayout"));
        containerTitleLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout11 = new QVBoxLayout();
        verticalLayout11->setSpacing(5);
        verticalLayout11->setObjectName(QStringLiteral("verticalLayout11"));
        labelTitle = new QLabel(containerTitle);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        verticalLayout11->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(containerTitle);
        labelSubtitle1->setObjectName(QStringLiteral("labelSubtitle1"));
        labelSubtitle1->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout11->addWidget(labelSubtitle1);


        containerTitleLayout->addLayout(verticalLayout11);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        containerTitleLayout->addItem(horizontalSpacer);

        containerViewPrivacyChecks = new QWidget(containerTitle);
        containerViewPrivacyChecks->setObjectName(QStringLiteral("containerViewPrivacyChecks"));
        containerPrivacyChecks = new QVBoxLayout(containerViewPrivacyChecks);
        containerPrivacyChecks->setSpacing(0);
        containerPrivacyChecks->setObjectName(QStringLiteral("containerPrivacyChecks"));
        containerPrivacyChecks->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(containerViewPrivacyChecks);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_2_1 = new QHBoxLayout(groupBox);
        horizontalLayout_2_1->setSpacing(0);
        horizontalLayout_2_1->setObjectName(QStringLiteral("horizontalLayout_2_1"));
        horizontalLayout_2_1->setContentsMargins(0, 0, 0, 0);
        pushLeft = new QPushButton(groupBox);
        pushLeft->setObjectName(QStringLiteral("pushLeft"));
        pushLeft->setMinimumSize(QSize(120, 30));
        pushLeft->setMaximumSize(QSize(120, 30));
        pushLeft->setFocusPolicy(Qt::NoFocus);
        pushLeft->setCheckable(true);
        pushLeft->setAutoExclusive(true);

        horizontalLayout_2_1->addWidget(pushLeft);

        pushRight = new QPushButton(groupBox);
        pushRight->setObjectName(QStringLiteral("pushRight"));
        pushRight->setMinimumSize(QSize(120, 30));
        pushRight->setMaximumSize(QSize(120, 30));
        pushRight->setFocusPolicy(Qt::NoFocus);
        pushRight->setCheckable(true);
        pushRight->setChecked(true);
        pushRight->setAutoExclusive(true);

        horizontalLayout_2_1->addWidget(pushRight);


        containerPrivacyChecks->addWidget(groupBox, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        labelSubtitle2 = new QLabel(containerViewPrivacyChecks);
        labelSubtitle2->setObjectName(QStringLiteral("labelSubtitle2"));
        labelSubtitle2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        containerPrivacyChecks->addWidget(labelSubtitle2, 0, Qt::AlignTop);


        containerTitleLayout->addWidget(containerViewPrivacyChecks);


        verticalLayoutTop->addWidget(containerTitle);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutTop->addItem(verticalSpacer_2);

        containerSend = new QWidget(left);
        containerSend->setObjectName(QStringLiteral("containerSend"));
        containerSend->setMinimumSize(QSize(0, 50));
        containerSendRow = new QVBoxLayout(containerSend);
        containerSendRow->setSpacing(6);
        containerSendRow->setObjectName(QStringLiteral("containerSendRow"));
        containerSendRow->setContentsMargins(0, 0, 0, 0);
        labelEditTitle = new QLabel(containerSend);
        labelEditTitle->setObjectName(QStringLiteral("labelEditTitle"));
        labelEditTitle->setMaximumSize(QSize(16777215, 30));
        labelEditTitle->setStyleSheet(QStringLiteral("padding-left:20px; padding-bottom:3px;"));

        containerSendRow->addWidget(labelEditTitle);

        verticalSpacer_6 = new QSpacerItem(20, 9, QSizePolicy::Minimum, QSizePolicy::Fixed);

        containerSendRow->addItem(verticalSpacer_6);

        containerOwner = new QWidget(containerSend);
        containerOwner->setObjectName(QStringLiteral("containerOwner"));
        vContainerOwner = new QVBoxLayout(containerOwner);
        vContainerOwner->setSpacing(4);
        vContainerOwner->setObjectName(QStringLiteral("vContainerOwner"));
        vContainerOwner->setContentsMargins(20, 0, 20, 0);
        labelSubtitleDescription = new QLabel(containerOwner);
        labelSubtitleDescription->setObjectName(QStringLiteral("labelSubtitleDescription"));
        labelSubtitleDescription->setMaximumSize(QSize(16777215, 20));
        labelSubtitleDescription->setStyleSheet(QLatin1String("margin-bottom:2px;\n"
"                   margin-left:0.05px;\n"
"                   padding:0px;"));

        vContainerOwner->addWidget(labelSubtitleDescription);

        lineEditOwnerAddress = new QLineEdit(containerOwner);
        lineEditOwnerAddress->setObjectName(QStringLiteral("lineEditOwnerAddress"));
        lineEditOwnerAddress->setMinimumSize(QSize(0, 50));
        lineEditOwnerAddress->setMaximumSize(QSize(16777215, 50));
        lineEditOwnerAddress->setStyleSheet(QStringLiteral(""));

        vContainerOwner->addWidget(lineEditOwnerAddress);


        containerSendRow->addWidget(containerOwner);


        verticalLayoutTop->addWidget(containerSend);


        verticalLayout_2->addLayout(verticalLayoutTop);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_3);

        containerBtn = new QWidget(left);
        containerBtn->setObjectName(QStringLiteral("containerBtn"));
        containerBtn->setMinimumSize(QSize(0, 50));
        horizontalLayout = new QHBoxLayout(containerBtn);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 20, -1);
        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        pushButtonClear = new QPushButton(containerBtn);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));
        pushButtonClear->setMinimumSize(QSize(200, 50));
        pushButtonClear->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_7->addWidget(pushButtonClear);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        pushButtonSend = new QPushButton(containerBtn);
        pushButtonSend->setObjectName(QStringLiteral("pushButtonSend"));
        pushButtonSend->setMinimumSize(QSize(200, 50));
        pushButtonSend->setMaximumSize(QSize(200, 50));
        pushButtonSend->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_7->addWidget(pushButtonSend);


        horizontalLayout->addLayout(horizontalLayout_7);


        verticalLayout_2->addWidget(containerBtn);

        containerHistoryLabel = new QWidget(left);
        containerHistoryLabel->setObjectName(QStringLiteral("containerHistoryLabel"));
        horizontalLayout_4 = new QHBoxLayout(containerHistoryLabel);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(20, 0, 20, 0);
        verticalWidget = new QWidget(containerHistoryLabel);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        verticalWidget->setMinimumSize(QSize(100, 0));
        verticalLayout_58 = new QVBoxLayout(verticalWidget);
        verticalLayout_58->setObjectName(QStringLiteral("verticalLayout_58"));
        verticalLayout_58->setContentsMargins(0, 0, 0, 0);
        labelListHistory = new QLabel(verticalWidget);
        labelListHistory->setObjectName(QStringLiteral("labelListHistory"));

        verticalLayout_58->addWidget(labelListHistory);


        horizontalLayout_4->addWidget(verticalWidget);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        labelStakingTotal = new QLabel(containerHistoryLabel);
        labelStakingTotal->setObjectName(QStringLiteral("labelStakingTotal"));

        horizontalLayout_4->addWidget(labelStakingTotal);


        verticalLayout_2->addWidget(containerHistoryLabel);

        verticalLayout_64 = new QVBoxLayout();
        verticalLayout_64->setSpacing(0);
        verticalLayout_64->setObjectName(QStringLiteral("verticalLayout_64"));
        verticalSpacer_44 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_64->addItem(verticalSpacer_44);

        listView = new QListView(left);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setEnabled(true);
        listView->setMouseTracking(true);

        verticalLayout_64->addWidget(listView);

        emptyContainer = new QFrame(left);
        emptyContainer->setObjectName(QStringLiteral("emptyContainer"));
        emptyContainer->setMinimumSize(QSize(0, 100));
        emptyContainer->setFrameShape(QFrame::StyledPanel);
        emptyContainer->setFrameShadow(QFrame::Raised);
        verticalLayout_71 = new QVBoxLayout(emptyContainer);
        verticalLayout_71->setSpacing(0);
        verticalLayout_71->setObjectName(QStringLiteral("verticalLayout_71"));
        verticalLayout_71->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_71->addItem(verticalSpacer);

        emptyScreen = new QFrame(emptyContainer);
        emptyScreen->setObjectName(QStringLiteral("emptyScreen"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(emptyScreen->sizePolicy().hasHeightForWidth());
        emptyScreen->setSizePolicy(sizePolicy1);
        emptyScreen->setFrameShape(QFrame::StyledPanel);
        emptyScreen->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(emptyScreen);
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushImgEmpty = new QPushButton(emptyScreen);
        pushImgEmpty->setObjectName(QStringLiteral("pushImgEmpty"));
        pushImgEmpty->setMinimumSize(QSize(100, 100));
        pushImgEmpty->setMaximumSize(QSize(100, 100));
        pushImgEmpty->setFocusPolicy(Qt::NoFocus);
        pushImgEmpty->setIconSize(QSize(100, 100));

        verticalLayout->addWidget(pushImgEmpty, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        labelEmpty = new QLabel(emptyScreen);
        labelEmpty->setObjectName(QStringLiteral("labelEmpty"));
        labelEmpty->setStyleSheet(QStringLiteral(""));
        labelEmpty->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelEmpty, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_71->addWidget(emptyScreen, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalLayout_71->setStretch(0, 1);
        verticalLayout_71->setStretch(1, 8);

        verticalLayout_64->addWidget(emptyContainer);


        verticalLayout_2->addLayout(verticalLayout_64);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_1->addWidget(left);

        right = new QWidget(ColdStakingWidget);
        right->setObjectName(QStringLiteral("right"));
        rightContainer = new QVBoxLayout(right);
        rightContainer->setObjectName(QStringLiteral("rightContainer"));
        rightContainer->setContentsMargins(1, 0, 1, 0);
        containerRightButtons = new QWidget(right);
        containerRightButtons->setObjectName(QStringLiteral("containerRightButtons"));
        containerRightButtons->setMinimumSize(QSize(0, 50));
        verticalLayout_4 = new QVBoxLayout(containerRightButtons);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(19, 0, 19, -1);
        btnCoinControl = new OptionButton(containerRightButtons);
        btnCoinControl->setObjectName(QStringLiteral("btnCoinControl"));
        btnCoinControl->setMinimumSize(QSize(0, 0));

        verticalLayout_4->addWidget(btnCoinControl);

        btnColdStaking = new OptionButton(containerRightButtons);
        btnColdStaking->setObjectName(QStringLiteral("btnColdStaking"));

        verticalLayout_4->addWidget(btnColdStaking);

        btnMyStakingAddresses = new OptionButton(containerRightButtons);
        btnMyStakingAddresses->setObjectName(QStringLiteral("btnMyStakingAddresses"));
        sizePolicy.setHeightForWidth(btnMyStakingAddresses->sizePolicy().hasHeightForWidth());
        btnMyStakingAddresses->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(btnMyStakingAddresses);


        rightContainer->addWidget(containerRightButtons);

        listViewStakingAddress = new QListView(right);
        listViewStakingAddress->setObjectName(QStringLiteral("listViewStakingAddress"));
        listViewStakingAddress->setEnabled(true);
        listViewStakingAddress->setMouseTracking(true);

        rightContainer->addWidget(listViewStakingAddress);


        horizontalLayout_1->addWidget(right);

        horizontalLayout_1->setStretch(0, 2);
        horizontalLayout_1->setStretch(1, 1);

        retranslateUi(ColdStakingWidget);

        QMetaObject::connectSlotsByName(ColdStakingWidget);
    } // setupUi

    void retranslateUi(QWidget *ColdStakingWidget)
    {
        ColdStakingWidget->setWindowTitle(QApplication::translate("ColdStakingWidget", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("ColdStakingWidget", "Title", Q_NULLPTR));
        labelSubtitle1->setText(QApplication::translate("ColdStakingWidget", "TextLabel", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushLeft->setText(QString());
        pushRight->setText(QString());
        labelSubtitle2->setText(QApplication::translate("ColdStakingWidget", "TextLabel", Q_NULLPTR));
        labelEditTitle->setText(QString());
        labelSubtitleDescription->setText(QApplication::translate("ColdStakingWidget", "Owner address (optional, if empty a new address will be created)", Q_NULLPTR));
        pushButtonClear->setText(QString());
        pushButtonSend->setText(QString());
        labelListHistory->setText(QApplication::translate("ColdStakingWidget", "List of delegated balance by address", Q_NULLPTR));
        labelStakingTotal->setText(QApplication::translate("ColdStakingWidget", "Total Staking:", Q_NULLPTR));
        pushImgEmpty->setText(QString());
        labelEmpty->setText(QApplication::translate("ColdStakingWidget", "No balance delegated", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ColdStakingWidget: public Ui_ColdStakingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLDSTAKINGWIDGET_H
