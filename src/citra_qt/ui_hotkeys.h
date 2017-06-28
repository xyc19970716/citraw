/********************************************************************************
** Form generated from reading UI file 'hotkeys.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTKEYS_H
#define UI_HOTKEYS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hotkeys
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *hotkeys)
    {
        if (hotkeys->objectName().isEmpty())
            hotkeys->setObjectName(QStringLiteral("hotkeys"));
        hotkeys->resize(363, 388);
        verticalLayout = new QVBoxLayout(hotkeys);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(hotkeys);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
        treeWidget->setHeaderHidden(false);

        verticalLayout->addWidget(treeWidget);


        retranslateUi(hotkeys);

        QMetaObject::connectSlotsByName(hotkeys);
    } // setupUi

    void retranslateUi(QWidget *hotkeys)
    {
        hotkeys->setWindowTitle(QApplication::translate("hotkeys", "Hotkey Settings", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("hotkeys", "Context", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("hotkeys", "Hotkey", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("hotkeys", "Action", 0));
    } // retranslateUi

};

namespace Ui {
    class hotkeys: public Ui_hotkeys {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTKEYS_H
