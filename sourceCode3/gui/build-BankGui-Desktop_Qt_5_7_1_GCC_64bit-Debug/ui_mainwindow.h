/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStart;
    QAction *actionStop;
    QAction *actionStart_2;
    QAction *actionStop_2;
    QAction *actionAbout;
    QWidget *centralWidget;
    QPushButton *addPersonButton;
    QPushButton *createPersonButton;
    QLabel *personNumLabel;
    QLabel *businessIdLabel;
    QSpinBox *businessIdBox;
    QSpinBox *personNumBox;
    QFrame *line;
    QLabel *businessIdBoxWaringLabel;
    QTextBrowser *w2;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QTextBrowser *w4;
    QTextBrowser *w1;
    QTextBrowser *w3;
    QLabel *windowOneName;
    QLabel *windowFourName;
    QLabel *windowThreeName;
    QLabel *windowTwoName;
    QTextBrowser *runingText;
    QLabel *windowStatus_1;
    QLabel *windowStatus_2;
    QLabel *windowStatus_3;
    QLabel *windowStatus_4;
    QMenuBar *menuBar;
    QMenu *menuChoose;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(791, 484);
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QStringLiteral("actionStart"));
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        actionStart_2 = new QAction(MainWindow);
        actionStart_2->setObjectName(QStringLiteral("actionStart_2"));
        actionStop_2 = new QAction(MainWindow);
        actionStop_2->setObjectName(QStringLiteral("actionStop_2"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        addPersonButton = new QPushButton(centralWidget);
        addPersonButton->setObjectName(QStringLiteral("addPersonButton"));
        addPersonButton->setGeometry(QRect(648, 290, 111, 51));
        createPersonButton = new QPushButton(centralWidget);
        createPersonButton->setObjectName(QStringLiteral("createPersonButton"));
        createPersonButton->setGeometry(QRect(600, 360, 161, 51));
        personNumLabel = new QLabel(centralWidget);
        personNumLabel->setObjectName(QStringLiteral("personNumLabel"));
        personNumLabel->setGeometry(QRect(560, 323, 41, 16));
        businessIdLabel = new QLabel(centralWidget);
        businessIdLabel->setObjectName(QStringLiteral("businessIdLabel"));
        businessIdLabel->setGeometry(QRect(536, 293, 59, 14));
        businessIdBox = new QSpinBox(centralWidget);
        businessIdBox->setObjectName(QStringLiteral("businessIdBox"));
        businessIdBox->setGeometry(QRect(596, 290, 47, 23));
        personNumBox = new QSpinBox(centralWidget);
        personNumBox->setObjectName(QStringLiteral("personNumBox"));
        personNumBox->setGeometry(QRect(596, 320, 47, 23));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(70, 260, 641, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        businessIdBoxWaringLabel = new QLabel(centralWidget);
        businessIdBoxWaringLabel->setObjectName(QStringLiteral("businessIdBoxWaringLabel"));
        businessIdBoxWaringLabel->setGeometry(QRect(547, 270, 111, 20));
        businessIdBoxWaringLabel->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        w2 = new QTextBrowser(centralWidget);
        w2->setObjectName(QStringLiteral("w2"));
        w2->setGeometry(QRect(220, 60, 161, 181));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(196, 60, 20, 181));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(578, 60, 20, 181));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(387, 60, 20, 181));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        w4 = new QTextBrowser(centralWidget);
        w4->setObjectName(QStringLiteral("w4"));
        w4->setGeometry(QRect(604, 60, 161, 181));
        w1 = new QTextBrowser(centralWidget);
        w1->setObjectName(QStringLiteral("w1"));
        w1->setGeometry(QRect(30, 60, 161, 181));
        w3 = new QTextBrowser(centralWidget);
        w3->setObjectName(QStringLiteral("w3"));
        w3->setGeometry(QRect(410, 60, 161, 181));
        windowOneName = new QLabel(centralWidget);
        windowOneName->setObjectName(QStringLiteral("windowOneName"));
        windowOneName->setGeometry(QRect(39, 24, 81, 31));
        windowOneName->setStyleSheet(QStringLiteral("font: 14pt \"Sans Serif\";"));
        windowFourName = new QLabel(centralWidget);
        windowFourName->setObjectName(QStringLiteral("windowFourName"));
        windowFourName->setGeometry(QRect(614, 24, 81, 31));
        windowFourName->setStyleSheet(QStringLiteral("font: 14pt \"Sans Serif\";"));
        windowThreeName = new QLabel(centralWidget);
        windowThreeName->setObjectName(QStringLiteral("windowThreeName"));
        windowThreeName->setGeometry(QRect(419, 25, 81, 31));
        windowThreeName->setStyleSheet(QStringLiteral("font: 14pt \"Sans Serif\";"));
        windowTwoName = new QLabel(centralWidget);
        windowTwoName->setObjectName(QStringLiteral("windowTwoName"));
        windowTwoName->setGeometry(QRect(226, 25, 81, 31));
        windowTwoName->setStyleSheet(QStringLiteral("font: 14pt \"Sans Serif\";"));
        runingText = new QTextBrowser(centralWidget);
        runingText->setObjectName(QStringLiteral("runingText"));
        runingText->setGeometry(QRect(40, 280, 451, 161));
        windowStatus_1 = new QLabel(centralWidget);
        windowStatus_1->setObjectName(QStringLiteral("windowStatus_1"));
        windowStatus_1->setGeometry(QRect(110, 18, 91, 41));
        windowStatus_1->setStyleSheet(QStringLiteral("font: 16pt \"Sans Serif\";"));
        windowStatus_2 = new QLabel(centralWidget);
        windowStatus_2->setObjectName(QStringLiteral("windowStatus_2"));
        windowStatus_2->setGeometry(QRect(296, 20, 91, 41));
        windowStatus_2->setStyleSheet(QStringLiteral("font: 16pt \"Sans Serif\";"));
        windowStatus_3 = new QLabel(centralWidget);
        windowStatus_3->setObjectName(QStringLiteral("windowStatus_3"));
        windowStatus_3->setGeometry(QRect(489, 20, 91, 41));
        windowStatus_3->setStyleSheet(QStringLiteral("font: 16pt \"Sans Serif\";"));
        windowStatus_4 = new QLabel(centralWidget);
        windowStatus_4->setObjectName(QStringLiteral("windowStatus_4"));
        windowStatus_4->setGeometry(QRect(685, 18, 91, 41));
        windowStatus_4->setStyleSheet(QStringLiteral("font: 16pt \"Sans Serif\";"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 791, 19));
        menuChoose = new QMenu(menuBar);
        menuChoose->setObjectName(QStringLiteral("menuChoose"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuChoose->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuChoose->addAction(actionStart_2);
        menuChoose->addAction(actionStop_2);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionStart->setText(QApplication::translate("MainWindow", "start", Q_NULLPTR));
        actionStop->setText(QApplication::translate("MainWindow", "stop", Q_NULLPTR));
        actionStart_2->setText(QApplication::translate("MainWindow", "start", Q_NULLPTR));
        actionStop_2->setText(QApplication::translate("MainWindow", "stop", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "about", Q_NULLPTR));
        addPersonButton->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240", Q_NULLPTR));
        createPersonButton->setText(QApplication::translate("MainWindow", "\351\232\217\346\234\272\344\272\247\347\224\23710\344\270\252\344\272\272", Q_NULLPTR));
        personNumLabel->setText(QApplication::translate("MainWindow", "\344\272\272\346\225\260:", Q_NULLPTR));
        businessIdLabel->setText(QApplication::translate("MainWindow", "\344\270\232\345\212\241\347\274\226\345\217\267:", Q_NULLPTR));
        businessIdBoxWaringLabel->setText(QApplication::translate("MainWindow", "\344\270\232\345\212\241\347\274\226\345\217\267\350\214\203\345\233\264:1-8", Q_NULLPTR));
        windowOneName->setText(QApplication::translate("MainWindow", "\347\252\227\345\217\243\344\270\200:", Q_NULLPTR));
        windowFourName->setText(QApplication::translate("MainWindow", "\347\252\227\345\217\243\345\233\233:", Q_NULLPTR));
        windowThreeName->setText(QApplication::translate("MainWindow", "\347\252\227\345\217\243\344\270\211:", Q_NULLPTR));
        windowTwoName->setText(QApplication::translate("MainWindow", "\347\252\227\345\217\243\344\272\214:", Q_NULLPTR));
        windowStatus_1->setText(QApplication::translate("MainWindow", "\345\277\231\347\242\214", Q_NULLPTR));
        windowStatus_2->setText(QApplication::translate("MainWindow", "\345\277\231\347\242\214", Q_NULLPTR));
        windowStatus_3->setText(QApplication::translate("MainWindow", "\345\277\231\347\242\214", Q_NULLPTR));
        windowStatus_4->setText(QApplication::translate("MainWindow", "\345\277\231\347\242\214", Q_NULLPTR));
        menuChoose->setTitle(QApplication::translate("MainWindow", "choose", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
