/********************************************************************************
** Form generated from reading UI file 'navmenuwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVMENUWIDGET_H
#define UI_NAVMENUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NavMenuWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *navContainer_2;
    QVBoxLayout *navContainer;
    QPushButton *imgLogo;
    QScrollArea *scrollAreaNav;
    QWidget *scrollAreaNavVert;
    QVBoxLayout *verticalLayout_3;
    QToolButton *btnDashboard;
    QToolButton *btnSend;
    QToolButton *btnReceive;
    QToolButton *btnAddress;
    QToolButton *btnMaster;
    QToolButton *btnColdStaking;
    QToolButton *btnSettings;
    QSpacerItem *verticalSpacer;
    QLabel *labelVersion;

    void setupUi(QWidget *NavMenuWidget)
    {
        if (NavMenuWidget->objectName().isEmpty())
            NavMenuWidget->setObjectName(QStringLiteral("NavMenuWidget"));
        NavMenuWidget->resize(102, 786);
        NavMenuWidget->setStyleSheet(QLatin1String("padding:0px;\n"
"border:none;\n"
"margin:0px;"));
        verticalLayout = new QVBoxLayout(NavMenuWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        navContainer_2 = new QWidget(NavMenuWidget);
        navContainer_2->setObjectName(QStringLiteral("navContainer_2"));
        navContainer = new QVBoxLayout(navContainer_2);
        navContainer->setSpacing(0);
        navContainer->setObjectName(QStringLiteral("navContainer"));
        navContainer->setContentsMargins(0, 0, 0, 10);
        imgLogo = new QPushButton(navContainer_2);
        imgLogo->setObjectName(QStringLiteral("imgLogo"));
        imgLogo->setMinimumSize(QSize(0, 120));
        imgLogo->setFocusPolicy(Qt::NoFocus);
        imgLogo->setIconSize(QSize(64, 64));

        navContainer->addWidget(imgLogo);

        scrollAreaNav = new QScrollArea(navContainer_2);
        scrollAreaNav->setObjectName(QStringLiteral("scrollAreaNav"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaNav->sizePolicy().hasHeightForWidth());
        scrollAreaNav->setSizePolicy(sizePolicy);
        scrollAreaNav->setMinimumSize(QSize(0, 0));
        scrollAreaNav->setStyleSheet(QLatin1String("QScrollBar {\n"
"height:0px;\n"
" width:0px;\n"
"}\n"
"\n"
"#scrollAreaNav{\n"
"background-color:transparent;\n"
"}"));
        scrollAreaNav->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollAreaNav->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollAreaNav->setWidgetResizable(true);
        scrollAreaNav->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaNavVert = new QWidget();
        scrollAreaNavVert->setObjectName(QStringLiteral("scrollAreaNavVert"));
        scrollAreaNavVert->setGeometry(QRect(0, 0, 102, 617));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaNavVert->sizePolicy().hasHeightForWidth());
        scrollAreaNavVert->setSizePolicy(sizePolicy1);
        scrollAreaNavVert->setMinimumSize(QSize(0, 0));
        scrollAreaNavVert->setAutoFillBackground(false);
        scrollAreaNavVert->setStyleSheet(QLatin1String("#scrollAreaNavVert{\n"
"background-color:transparent;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(scrollAreaNavVert);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnDashboard = new QToolButton(scrollAreaNavVert);
        btnDashboard->setObjectName(QStringLiteral("btnDashboard"));
        btnDashboard->setMinimumSize(QSize(100, 80));
        btnDashboard->setIconSize(QSize(32, 32));
        btnDashboard->setCheckable(true);
        btnDashboard->setChecked(true);
        btnDashboard->setAutoExclusive(true);

        verticalLayout_3->addWidget(btnDashboard);

        btnSend = new QToolButton(scrollAreaNavVert);
        btnSend->setObjectName(QStringLiteral("btnSend"));
        btnSend->setMinimumSize(QSize(100, 80));
        btnSend->setIconSize(QSize(32, 32));
        btnSend->setCheckable(true);
        btnSend->setAutoExclusive(true);

        verticalLayout_3->addWidget(btnSend);

        btnReceive = new QToolButton(scrollAreaNavVert);
        btnReceive->setObjectName(QStringLiteral("btnReceive"));
        btnReceive->setMinimumSize(QSize(100, 80));
        btnReceive->setCheckable(true);
        btnReceive->setAutoExclusive(true);

        verticalLayout_3->addWidget(btnReceive);

        btnAddress = new QToolButton(scrollAreaNavVert);
        btnAddress->setObjectName(QStringLiteral("btnAddress"));
        btnAddress->setMinimumSize(QSize(100, 80));
        btnAddress->setIconSize(QSize(32, 32));
        btnAddress->setCheckable(true);
        btnAddress->setAutoExclusive(true);

        verticalLayout_3->addWidget(btnAddress);

        btnMaster = new QToolButton(scrollAreaNavVert);
        btnMaster->setObjectName(QStringLiteral("btnMaster"));
        btnMaster->setMinimumSize(QSize(100, 80));
        btnMaster->setIconSize(QSize(32, 32));
        btnMaster->setCheckable(true);
        btnMaster->setAutoExclusive(true);

        verticalLayout_3->addWidget(btnMaster);

        btnColdStaking = new QToolButton(scrollAreaNavVert);
        btnColdStaking->setObjectName(QStringLiteral("btnColdStaking"));
        btnColdStaking->setMinimumSize(QSize(100, 80));
        btnColdStaking->setIconSize(QSize(32, 32));
        btnColdStaking->setCheckable(true);
        btnColdStaking->setAutoExclusive(true);

        verticalLayout_3->addWidget(btnColdStaking);

        btnSettings = new QToolButton(scrollAreaNavVert);
        btnSettings->setObjectName(QStringLiteral("btnSettings"));
        btnSettings->setMinimumSize(QSize(100, 80));
        btnSettings->setIconSize(QSize(32, 32));
        btnSettings->setCheckable(true);
        btnSettings->setAutoExclusive(true);

        verticalLayout_3->addWidget(btnSettings);

        scrollAreaNav->setWidget(scrollAreaNavVert);

        navContainer->addWidget(scrollAreaNav);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        navContainer->addItem(verticalSpacer);

        labelVersion = new QLabel(navContainer_2);
        labelVersion->setObjectName(QStringLiteral("labelVersion"));
        labelVersion->setMaximumSize(QSize(16777215, 60));
        labelVersion->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        navContainer->addWidget(labelVersion, 0, Qt::AlignHCenter);


        verticalLayout->addWidget(navContainer_2);


        retranslateUi(NavMenuWidget);

        QMetaObject::connectSlotsByName(NavMenuWidget);
    } // setupUi

    void retranslateUi(QWidget *NavMenuWidget)
    {
        NavMenuWidget->setWindowTitle(QApplication::translate("NavMenuWidget", "Form", Q_NULLPTR));
        imgLogo->setText(QString());
        btnDashboard->setText(QString());
        btnSend->setText(QString());
        btnReceive->setText(QString());
        btnAddress->setText(QString());
        btnMaster->setText(QString());
        btnColdStaking->setText(QString());
        btnSettings->setText(QString());
        labelVersion->setText(QApplication::translate("NavMenuWidget", "V 1.0.0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NavMenuWidget: public Ui_NavMenuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVMENUWIDGET_H
