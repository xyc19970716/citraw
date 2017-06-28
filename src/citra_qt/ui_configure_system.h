/********************************************************************************
** Form generated from reading UI file 'configure_system.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_SYSTEM_H
#define UI_CONFIGURE_SYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureSystem
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *group_system_settings;
    QGridLayout *gridLayout;
    QLabel *label_username;
    QLineEdit *edit_username;
    QLabel *label_birthday;
    QHBoxLayout *horizontalLayout_birthday2;
    QComboBox *combo_birthmonth;
    QComboBox *combo_birthday;
    QLabel *label_language;
    QComboBox *combo_language;
    QLabel *label_sound;
    QComboBox *combo_sound;
    QLabel *label_console_id;
    QPushButton *button_regenerate_console_id;
    QLabel *label_disable_info;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ConfigureSystem)
    {
        if (ConfigureSystem->objectName().isEmpty())
            ConfigureSystem->setObjectName(QStringLiteral("ConfigureSystem"));
        ConfigureSystem->resize(360, 377);
        horizontalLayout = new QHBoxLayout(ConfigureSystem);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        group_system_settings = new QGroupBox(ConfigureSystem);
        group_system_settings->setObjectName(QStringLiteral("group_system_settings"));
        gridLayout = new QGridLayout(group_system_settings);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_username = new QLabel(group_system_settings);
        label_username->setObjectName(QStringLiteral("label_username"));

        gridLayout->addWidget(label_username, 0, 0, 1, 1);

        edit_username = new QLineEdit(group_system_settings);
        edit_username->setObjectName(QStringLiteral("edit_username"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(edit_username->sizePolicy().hasHeightForWidth());
        edit_username->setSizePolicy(sizePolicy);
        edit_username->setMaxLength(10);

        gridLayout->addWidget(edit_username, 0, 1, 1, 1);

        label_birthday = new QLabel(group_system_settings);
        label_birthday->setObjectName(QStringLiteral("label_birthday"));

        gridLayout->addWidget(label_birthday, 1, 0, 1, 1);

        horizontalLayout_birthday2 = new QHBoxLayout();
        horizontalLayout_birthday2->setObjectName(QStringLiteral("horizontalLayout_birthday2"));
        combo_birthmonth = new QComboBox(group_system_settings);
        combo_birthmonth->setObjectName(QStringLiteral("combo_birthmonth"));

        horizontalLayout_birthday2->addWidget(combo_birthmonth);

        combo_birthday = new QComboBox(group_system_settings);
        combo_birthday->setObjectName(QStringLiteral("combo_birthday"));

        horizontalLayout_birthday2->addWidget(combo_birthday);


        gridLayout->addLayout(horizontalLayout_birthday2, 1, 1, 1, 1);

        label_language = new QLabel(group_system_settings);
        label_language->setObjectName(QStringLiteral("label_language"));

        gridLayout->addWidget(label_language, 2, 0, 1, 1);

        combo_language = new QComboBox(group_system_settings);
        combo_language->setObjectName(QStringLiteral("combo_language"));

        gridLayout->addWidget(combo_language, 2, 1, 1, 1);

        label_sound = new QLabel(group_system_settings);
        label_sound->setObjectName(QStringLiteral("label_sound"));

        gridLayout->addWidget(label_sound, 3, 0, 1, 1);

        combo_sound = new QComboBox(group_system_settings);
        combo_sound->setObjectName(QStringLiteral("combo_sound"));

        gridLayout->addWidget(combo_sound, 3, 1, 1, 1);

        label_console_id = new QLabel(group_system_settings);
        label_console_id->setObjectName(QStringLiteral("label_console_id"));

        gridLayout->addWidget(label_console_id, 4, 0, 1, 1);

        button_regenerate_console_id = new QPushButton(group_system_settings);
        button_regenerate_console_id->setObjectName(QStringLiteral("button_regenerate_console_id"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_regenerate_console_id->sizePolicy().hasHeightForWidth());
        button_regenerate_console_id->setSizePolicy(sizePolicy1);
        button_regenerate_console_id->setLayoutDirection(Qt::RightToLeft);

        gridLayout->addWidget(button_regenerate_console_id, 4, 1, 1, 1);


        verticalLayout->addWidget(group_system_settings);

        label_disable_info = new QLabel(ConfigureSystem);
        label_disable_info->setObjectName(QStringLiteral("label_disable_info"));
        label_disable_info->setWordWrap(true);

        verticalLayout->addWidget(label_disable_info);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(ConfigureSystem);

        QMetaObject::connectSlotsByName(ConfigureSystem);
    } // setupUi

    void retranslateUi(QWidget *ConfigureSystem)
    {
        ConfigureSystem->setWindowTitle(QApplication::translate("ConfigureSystem", "Form", 0));
        group_system_settings->setTitle(QApplication::translate("ConfigureSystem", "System Settings", 0));
        label_username->setText(QApplication::translate("ConfigureSystem", "Username", 0));
        label_birthday->setText(QApplication::translate("ConfigureSystem", "Birthday", 0));
        combo_birthmonth->clear();
        combo_birthmonth->insertItems(0, QStringList()
         << QApplication::translate("ConfigureSystem", "January", 0)
         << QApplication::translate("ConfigureSystem", "February", 0)
         << QApplication::translate("ConfigureSystem", "March", 0)
         << QApplication::translate("ConfigureSystem", "April", 0)
         << QApplication::translate("ConfigureSystem", "May", 0)
         << QApplication::translate("ConfigureSystem", "June", 0)
         << QApplication::translate("ConfigureSystem", "July", 0)
         << QApplication::translate("ConfigureSystem", "August", 0)
         << QApplication::translate("ConfigureSystem", "September", 0)
         << QApplication::translate("ConfigureSystem", "October", 0)
         << QApplication::translate("ConfigureSystem", "November", 0)
         << QApplication::translate("ConfigureSystem", "December", 0)
        );
        label_language->setText(QApplication::translate("ConfigureSystem", "Language", 0));
        combo_language->clear();
        combo_language->insertItems(0, QStringList()
         << QApplication::translate("ConfigureSystem", "Japanese (\346\227\245\346\234\254\350\252\236)", 0)
         << QApplication::translate("ConfigureSystem", "English", 0)
         << QApplication::translate("ConfigureSystem", "French (fran\303\247ais)", 0)
         << QApplication::translate("ConfigureSystem", "German (Deutsch)", 0)
         << QApplication::translate("ConfigureSystem", "Italian (italiano)", 0)
         << QApplication::translate("ConfigureSystem", "Spanish (espa\303\261ol)", 0)
         << QApplication::translate("ConfigureSystem", "Simplified Chinese (\347\256\200\344\275\223\344\270\255\346\226\207)", 0)
         << QApplication::translate("ConfigureSystem", "Korean (\355\225\234\352\265\255\354\226\264)", 0)
         << QApplication::translate("ConfigureSystem", "Dutch (Nederlands)", 0)
         << QApplication::translate("ConfigureSystem", "Portuguese (portugu\303\252s)", 0)
         << QApplication::translate("ConfigureSystem", "Russian (\320\240\321\203\321\201\321\201\320\272\320\270\320\271)", 0)
         << QApplication::translate("ConfigureSystem", "Traditional Chinese (\346\255\243\351\253\224\344\270\255\346\226\207)", 0)
        );
#ifndef QT_NO_TOOLTIP
        combo_language->setToolTip(QApplication::translate("ConfigureSystem", "Note: this can be overridden when region setting is auto-select", 0));
#endif // QT_NO_TOOLTIP
        label_sound->setText(QApplication::translate("ConfigureSystem", "Sound output mode", 0));
        combo_sound->clear();
        combo_sound->insertItems(0, QStringList()
         << QApplication::translate("ConfigureSystem", "Mono", 0)
         << QApplication::translate("ConfigureSystem", "Stereo", 0)
         << QApplication::translate("ConfigureSystem", "Surround", 0)
        );
        label_console_id->setText(QApplication::translate("ConfigureSystem", "Console ID:", 0));
        button_regenerate_console_id->setText(QApplication::translate("ConfigureSystem", "Regenerate", 0));
        label_disable_info->setText(QApplication::translate("ConfigureSystem", "System settings are available only when game is not running.", 0));
    } // retranslateUi

};

namespace Ui {
    class ConfigureSystem: public Ui_ConfigureSystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_SYSTEM_H
