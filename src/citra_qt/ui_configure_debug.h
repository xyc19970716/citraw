/********************************************************************************
** Form generated from reading UI file 'configure_debug.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_DEBUG_H
#define UI_CONFIGURE_DEBUG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureDebug
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *toggle_gdbstub;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpinBox *gdbport_spinbox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ConfigureDebug)
    {
        if (ConfigureDebug->objectName().isEmpty())
            ConfigureDebug->setObjectName(QStringLiteral("ConfigureDebug"));
        ConfigureDebug->resize(400, 300);
        verticalLayout = new QVBoxLayout(ConfigureDebug);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(ConfigureDebug);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        toggle_gdbstub = new QCheckBox(groupBox);
        toggle_gdbstub->setObjectName(QStringLiteral("toggle_gdbstub"));

        horizontalLayout_3->addWidget(toggle_gdbstub);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        gdbport_spinbox = new QSpinBox(groupBox);
        gdbport_spinbox->setObjectName(QStringLiteral("gdbport_spinbox"));
        gdbport_spinbox->setMaximum(65536);

        horizontalLayout_3->addWidget(gdbport_spinbox);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(groupBox);


        verticalLayout->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ConfigureDebug);
        QObject::connect(toggle_gdbstub, SIGNAL(toggled(bool)), gdbport_spinbox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(ConfigureDebug);
    } // setupUi

    void retranslateUi(QWidget *ConfigureDebug)
    {
        ConfigureDebug->setWindowTitle(QApplication::translate("ConfigureDebug", "Form", 0));
        groupBox->setTitle(QApplication::translate("ConfigureDebug", "GDB", 0));
        toggle_gdbstub->setText(QApplication::translate("ConfigureDebug", "Enable GDB Stub", 0));
        label->setText(QApplication::translate("ConfigureDebug", "Port:", 0));
    } // retranslateUi

};

namespace Ui {
    class ConfigureDebug: public Ui_ConfigureDebug {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_DEBUG_H
