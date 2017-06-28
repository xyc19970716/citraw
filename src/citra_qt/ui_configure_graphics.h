/********************************************************************************
** Form generated from reading UI file 'configure_graphics.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_GRAPHICS_H
#define UI_CONFIGURE_GRAPHICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureGraphics
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *toggle_hw_renderer;
    QCheckBox *toggle_shader_jit;
    QCheckBox *toggle_vsync;
    QCheckBox *toggle_framelimit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *resolution_factor_combobox;
    QGroupBox *layoutBox;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label1;
    QComboBox *layout_combobox;
    QCheckBox *swap_screen;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ConfigureGraphics)
    {
        if (ConfigureGraphics->objectName().isEmpty())
            ConfigureGraphics->setObjectName(QStringLiteral("ConfigureGraphics"));
        ConfigureGraphics->resize(400, 300);
        verticalLayout = new QVBoxLayout(ConfigureGraphics);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(ConfigureGraphics);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        toggle_hw_renderer = new QCheckBox(groupBox);
        toggle_hw_renderer->setObjectName(QStringLiteral("toggle_hw_renderer"));

        verticalLayout_2->addWidget(toggle_hw_renderer);

        toggle_shader_jit = new QCheckBox(groupBox);
        toggle_shader_jit->setObjectName(QStringLiteral("toggle_shader_jit"));

        verticalLayout_2->addWidget(toggle_shader_jit);

        toggle_vsync = new QCheckBox(groupBox);
        toggle_vsync->setObjectName(QStringLiteral("toggle_vsync"));

        verticalLayout_2->addWidget(toggle_vsync);

        toggle_framelimit = new QCheckBox(groupBox);
        toggle_framelimit->setObjectName(QStringLiteral("toggle_framelimit"));

        verticalLayout_2->addWidget(toggle_framelimit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        resolution_factor_combobox = new QComboBox(groupBox);
        resolution_factor_combobox->insertItems(0, QStringList()
         << QStringLiteral("Auto (Window Size)")
         << QStringLiteral("Native (400x240)")
         << QStringLiteral("2x Native (800x480)")
         << QStringLiteral("3x Native (1200x720)")
         << QStringLiteral("4x Native (1600x960)")
         << QStringLiteral("5x Native (2000x1200)")
         << QStringLiteral("6x Native (2400x1440)")
         << QStringLiteral("7x Native (2800x1680)")
         << QStringLiteral("8x Native (3200x1920)")
         << QStringLiteral("9x Native (3600x2160)")
         << QStringLiteral("10x Native (4000x2400)")
        );
        resolution_factor_combobox->setObjectName(QStringLiteral("resolution_factor_combobox"));

        horizontalLayout->addWidget(resolution_factor_combobox);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(groupBox);


        verticalLayout->addLayout(verticalLayout_3);

        layoutBox = new QGroupBox(ConfigureGraphics);
        layoutBox->setObjectName(QStringLiteral("layoutBox"));
        horizontalLayout_3 = new QHBoxLayout(layoutBox);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label1 = new QLabel(layoutBox);
        label1->setObjectName(QStringLiteral("label1"));

        horizontalLayout_4->addWidget(label1);

        layout_combobox = new QComboBox(layoutBox);
        layout_combobox->insertItems(0, QStringList()
         << QStringLiteral("Default")
         << QStringLiteral("Single Screen")
         << QStringLiteral("Large Screen")
        );
        layout_combobox->setObjectName(QStringLiteral("layout_combobox"));

        horizontalLayout_4->addWidget(layout_combobox);


        verticalLayout_4->addLayout(horizontalLayout_4);

        swap_screen = new QCheckBox(layoutBox);
        swap_screen->setObjectName(QStringLiteral("swap_screen"));

        verticalLayout_4->addWidget(swap_screen);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout->addWidget(layoutBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ConfigureGraphics);
        QObject::connect(toggle_hw_renderer, SIGNAL(toggled(bool)), resolution_factor_combobox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(ConfigureGraphics);
    } // setupUi

    void retranslateUi(QWidget *ConfigureGraphics)
    {
        ConfigureGraphics->setWindowTitle(QApplication::translate("ConfigureGraphics", "Form", 0));
        groupBox->setTitle(QApplication::translate("ConfigureGraphics", "Graphics", 0));
        toggle_hw_renderer->setText(QApplication::translate("ConfigureGraphics", "Enable hardware renderer", 0));
        toggle_shader_jit->setText(QApplication::translate("ConfigureGraphics", "Enable shader JIT", 0));
        toggle_vsync->setText(QApplication::translate("ConfigureGraphics", "Enable V-Sync", 0));
        toggle_framelimit->setText(QApplication::translate("ConfigureGraphics", "Limit framerate", 0));
        label->setText(QApplication::translate("ConfigureGraphics", "Internal Resolution:", 0));
        layoutBox->setTitle(QApplication::translate("ConfigureGraphics", "Layout", 0));
        label1->setText(QApplication::translate("ConfigureGraphics", "Screen Layout:", 0));
        swap_screen->setText(QApplication::translate("ConfigureGraphics", "Swap Screens", 0));
    } // retranslateUi

};

namespace Ui {
    class ConfigureGraphics: public Ui_ConfigureGraphics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_GRAPHICS_H
