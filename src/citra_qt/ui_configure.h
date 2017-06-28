/********************************************************************************
** Form generated from reading UI file 'configure.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_H
#define UI_CONFIGURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include "configuration/configure_audio.h"
#include "configuration/configure_debug.h"
#include "configuration/configure_general.h"
#include "configuration/configure_graphics.h"
#include "configuration/configure_input.h"
#include "configuration/configure_system.h"

QT_BEGIN_NAMESPACE

class Ui_ConfigureDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    ConfigureGeneral *generalTab;
    ConfigureSystem *systemTab;
    ConfigureInput *inputTab;
    ConfigureGraphics *graphicsTab;
    ConfigureAudio *audioTab;
    ConfigureDebug *debugTab;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigureDialog)
    {
        if (ConfigureDialog->objectName().isEmpty())
            ConfigureDialog->setObjectName(QStringLiteral("ConfigureDialog"));
        ConfigureDialog->resize(441, 501);
        verticalLayout = new QVBoxLayout(ConfigureDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(ConfigureDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        generalTab = new ConfigureGeneral();
        generalTab->setObjectName(QStringLiteral("generalTab"));
        tabWidget->addTab(generalTab, QString());
        systemTab = new ConfigureSystem();
        systemTab->setObjectName(QStringLiteral("systemTab"));
        tabWidget->addTab(systemTab, QString());
        inputTab = new ConfigureInput();
        inputTab->setObjectName(QStringLiteral("inputTab"));
        tabWidget->addTab(inputTab, QString());
        graphicsTab = new ConfigureGraphics();
        graphicsTab->setObjectName(QStringLiteral("graphicsTab"));
        tabWidget->addTab(graphicsTab, QString());
        audioTab = new ConfigureAudio();
        audioTab->setObjectName(QStringLiteral("audioTab"));
        tabWidget->addTab(audioTab, QString());
        debugTab = new ConfigureDebug();
        debugTab->setObjectName(QStringLiteral("debugTab"));
        tabWidget->addTab(debugTab, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(ConfigureDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ConfigureDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfigureDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfigureDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ConfigureDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigureDialog)
    {
        ConfigureDialog->setWindowTitle(QApplication::translate("ConfigureDialog", "Citra Configuration", 0));
        tabWidget->setTabText(tabWidget->indexOf(generalTab), QApplication::translate("ConfigureDialog", "General", 0));
        tabWidget->setTabText(tabWidget->indexOf(systemTab), QApplication::translate("ConfigureDialog", "System", 0));
        tabWidget->setTabText(tabWidget->indexOf(inputTab), QApplication::translate("ConfigureDialog", "Input", 0));
        tabWidget->setTabText(tabWidget->indexOf(graphicsTab), QApplication::translate("ConfigureDialog", "Graphics", 0));
        tabWidget->setTabText(tabWidget->indexOf(audioTab), QApplication::translate("ConfigureDialog", "Audio", 0));
        tabWidget->setTabText(tabWidget->indexOf(debugTab), QApplication::translate("ConfigureDialog", "Debug", 0));
    } // retranslateUi

};

namespace Ui {
    class ConfigureDialog: public Ui_ConfigureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_H
