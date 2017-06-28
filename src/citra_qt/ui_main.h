/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Load_File;
    QAction *action_Load_Symbol_Map;
    QAction *action_Exit;
    QAction *action_Start;
    QAction *action_Pause;
    QAction *action_Stop;
    QAction *action_About;
    QAction *action_Single_Window_Mode;
    QAction *action_Configure;
    QAction *action_Display_Dock_Widget_Headers;
    QAction *action_Show_Filter_Bar;
    QAction *action_Show_Status_Bar;
    QAction *action_Select_Game_List_Root;
    QAction *action_Create_Pica_Surface_Viewer;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_recent_files;
    QMenu *menu_Emulation;
    QMenu *menu_View;
    QMenu *menu_View_Debugging;
    QMenu *menu_Help;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1081, 730);
        QIcon icon;
        icon.addFile(QStringLiteral("src/pcafe/res/icon3_64x64.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setDockNestingEnabled(true);
        action_Load_File = new QAction(MainWindow);
        action_Load_File->setObjectName(QStringLiteral("action_Load_File"));
        action_Load_Symbol_Map = new QAction(MainWindow);
        action_Load_Symbol_Map->setObjectName(QStringLiteral("action_Load_Symbol_Map"));
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QStringLiteral("action_Exit"));
        action_Start = new QAction(MainWindow);
        action_Start->setObjectName(QStringLiteral("action_Start"));
        action_Start->setEnabled(false);
        action_Pause = new QAction(MainWindow);
        action_Pause->setObjectName(QStringLiteral("action_Pause"));
        action_Pause->setEnabled(false);
        action_Stop = new QAction(MainWindow);
        action_Stop->setObjectName(QStringLiteral("action_Stop"));
        action_Stop->setEnabled(false);
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QStringLiteral("action_About"));
        action_Single_Window_Mode = new QAction(MainWindow);
        action_Single_Window_Mode->setObjectName(QStringLiteral("action_Single_Window_Mode"));
        action_Single_Window_Mode->setCheckable(true);
        action_Configure = new QAction(MainWindow);
        action_Configure->setObjectName(QStringLiteral("action_Configure"));
        action_Display_Dock_Widget_Headers = new QAction(MainWindow);
        action_Display_Dock_Widget_Headers->setObjectName(QStringLiteral("action_Display_Dock_Widget_Headers"));
        action_Display_Dock_Widget_Headers->setCheckable(true);
        action_Show_Filter_Bar = new QAction(MainWindow);
        action_Show_Filter_Bar->setObjectName(QStringLiteral("action_Show_Filter_Bar"));
        action_Show_Filter_Bar->setCheckable(true);
        action_Show_Status_Bar = new QAction(MainWindow);
        action_Show_Status_Bar->setObjectName(QStringLiteral("action_Show_Status_Bar"));
        action_Show_Status_Bar->setCheckable(true);
        action_Select_Game_List_Root = new QAction(MainWindow);
        action_Select_Game_List_Root->setObjectName(QStringLiteral("action_Select_Game_List_Root"));
        action_Create_Pica_Surface_Viewer = new QAction(MainWindow);
        action_Create_Pica_Surface_Viewer->setObjectName(QStringLiteral("action_Create_Pica_Surface_Viewer"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1081, 19));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_recent_files = new QMenu(menu_File);
        menu_recent_files->setObjectName(QStringLiteral("menu_recent_files"));
        menu_Emulation = new QMenu(menubar);
        menu_Emulation->setObjectName(QStringLiteral("menu_Emulation"));
        menu_View = new QMenu(menubar);
        menu_View->setObjectName(QStringLiteral("menu_View"));
        menu_View_Debugging = new QMenu(menu_View);
        menu_View_Debugging->setObjectName(QStringLiteral("menu_View_Debugging"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Emulation->menuAction());
        menubar->addAction(menu_View->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menu_File->addAction(action_Load_File);
        menu_File->addSeparator();
        menu_File->addAction(action_Select_Game_List_Root);
        menu_File->addAction(menu_recent_files->menuAction());
        menu_File->addSeparator();
        menu_File->addAction(action_Exit);
        menu_Emulation->addAction(action_Start);
        menu_Emulation->addAction(action_Pause);
        menu_Emulation->addAction(action_Stop);
        menu_Emulation->addSeparator();
        menu_Emulation->addAction(action_Configure);
        menu_View->addAction(action_Single_Window_Mode);
        menu_View->addAction(action_Display_Dock_Widget_Headers);
        menu_View->addAction(action_Show_Filter_Bar);
        menu_View->addAction(action_Show_Status_Bar);
        menu_View->addAction(menu_View_Debugging->menuAction());
        menu_View_Debugging->addAction(action_Create_Pica_Surface_Viewer);
        menu_View_Debugging->addSeparator();
        menu_Help->addAction(action_About);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Citra", 0));
        action_Load_File->setText(QApplication::translate("MainWindow", "Load File...", 0));
        action_Load_Symbol_Map->setText(QApplication::translate("MainWindow", "Load Symbol Map...", 0));
        action_Exit->setText(QApplication::translate("MainWindow", "E&xit", 0));
        action_Start->setText(QApplication::translate("MainWindow", "&Start", 0));
        action_Pause->setText(QApplication::translate("MainWindow", "&Pause", 0));
        action_Stop->setText(QApplication::translate("MainWindow", "&Stop", 0));
        action_About->setText(QApplication::translate("MainWindow", "About Citra", 0));
        action_Single_Window_Mode->setText(QApplication::translate("MainWindow", "Single Window Mode", 0));
        action_Configure->setText(QApplication::translate("MainWindow", "Configure...", 0));
        action_Display_Dock_Widget_Headers->setText(QApplication::translate("MainWindow", "Display Dock Widget Headers", 0));
        action_Show_Filter_Bar->setText(QApplication::translate("MainWindow", "Show Filter Bar", 0));
        action_Show_Status_Bar->setText(QApplication::translate("MainWindow", "Show Status Bar", 0));
        action_Select_Game_List_Root->setText(QApplication::translate("MainWindow", "Select Game Directory...", 0));
#ifndef QT_NO_TOOLTIP
        action_Select_Game_List_Root->setToolTip(QApplication::translate("MainWindow", "Selects a folder to display in the game list", 0));
#endif // QT_NO_TOOLTIP
        action_Create_Pica_Surface_Viewer->setText(QApplication::translate("MainWindow", "Create Pica Surface Viewer", 0));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0));
        menu_recent_files->setTitle(QApplication::translate("MainWindow", "Recent Files", 0));
        menu_Emulation->setTitle(QApplication::translate("MainWindow", "&Emulation", 0));
        menu_View->setTitle(QApplication::translate("MainWindow", "&View", 0));
        menu_View_Debugging->setTitle(QApplication::translate("MainWindow", "Debugging", 0));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
