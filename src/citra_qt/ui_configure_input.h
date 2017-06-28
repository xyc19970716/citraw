/********************************************************************************
** Form generated from reading UI file 'configure_input.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_INPUT_H
#define UI_CONFIGURE_INPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureInput
{
public:
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_7;
    QGroupBox *faceButtons;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *buttonA;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QPushButton *buttonB;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QPushButton *buttonX;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QPushButton *buttonY;
    QGroupBox *faceButtons_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_34;
    QPushButton *buttonDpadUp;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_35;
    QPushButton *buttonDpadDown;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_32;
    QPushButton *buttonDpadLeft;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_33;
    QPushButton *buttonDpadRight;
    QGroupBox *faceButtons_3;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_17;
    QPushButton *buttonL;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_19;
    QPushButton *buttonR;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_20;
    QPushButton *buttonZL;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_18;
    QPushButton *buttonZR;
    QGroupBox *faceButtons_4;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_21;
    QPushButton *buttonCircleLeft;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_23;
    QPushButton *buttonCircleRight;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_24;
    QPushButton *buttonCircleUp;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_22;
    QPushButton *buttonCircleDown;
    QGroupBox *faceButtons_5;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_21;
    QLabel *label_25;
    QPushButton *buttonCStickLeft;
    QVBoxLayout *verticalLayout_22;
    QLabel *label_27;
    QPushButton *buttonCStickRight;
    QVBoxLayout *verticalLayout_23;
    QLabel *label_28;
    QPushButton *buttonCStickUp;
    QVBoxLayout *verticalLayout_24;
    QLabel *label_26;
    QPushButton *buttonCStickDown;
    QGroupBox *faceButtons_6;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_25;
    QLabel *label_29;
    QPushButton *buttonStart;
    QVBoxLayout *verticalLayout_26;
    QLabel *label_30;
    QPushButton *buttonSelect;
    QVBoxLayout *verticalLayout_27;
    QLabel *label_31;
    QPushButton *buttonHome;
    QVBoxLayout *verticalLayout_28;
    QLabel *label_36;
    QPushButton *buttonCircleMod;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonRestoreDefaults;

    void setupUi(QWidget *ConfigureInput)
    {
        if (ConfigureInput->objectName().isEmpty())
            ConfigureInput->setObjectName(QStringLiteral("ConfigureInput"));
        ConfigureInput->resize(370, 534);
        verticalLayout_5 = new QVBoxLayout(ConfigureInput);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        faceButtons = new QGroupBox(ConfigureInput);
        faceButtons->setObjectName(QStringLiteral("faceButtons"));
        faceButtons->setFlat(false);
        faceButtons->setCheckable(false);
        gridLayout = new QGridLayout(faceButtons);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(faceButtons);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        buttonA = new QPushButton(faceButtons);
        buttonA->setObjectName(QStringLiteral("buttonA"));

        verticalLayout->addWidget(buttonA);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(faceButtons);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        buttonB = new QPushButton(faceButtons);
        buttonB->setObjectName(QStringLiteral("buttonB"));

        verticalLayout_2->addWidget(buttonB);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(faceButtons);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        buttonX = new QPushButton(faceButtons);
        buttonX->setObjectName(QStringLiteral("buttonX"));

        verticalLayout_3->addWidget(buttonX);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(faceButtons);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        buttonY = new QPushButton(faceButtons);
        buttonY->setObjectName(QStringLiteral("buttonY"));

        verticalLayout_4->addWidget(buttonY);


        gridLayout->addLayout(verticalLayout_4, 1, 1, 1, 1);


        gridLayout_7->addWidget(faceButtons, 0, 0, 1, 1);

        faceButtons_2 = new QGroupBox(ConfigureInput);
        faceButtons_2->setObjectName(QStringLiteral("faceButtons_2"));
        faceButtons_2->setFlat(false);
        faceButtons_2->setCheckable(false);
        gridLayout_2 = new QGridLayout(faceButtons_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_34 = new QLabel(faceButtons_2);
        label_34->setObjectName(QStringLiteral("label_34"));

        verticalLayout_12->addWidget(label_34);

        buttonDpadUp = new QPushButton(faceButtons_2);
        buttonDpadUp->setObjectName(QStringLiteral("buttonDpadUp"));

        verticalLayout_12->addWidget(buttonDpadUp);


        gridLayout_2->addLayout(verticalLayout_12, 1, 0, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_35 = new QLabel(faceButtons_2);
        label_35->setObjectName(QStringLiteral("label_35"));

        verticalLayout_9->addWidget(label_35);

        buttonDpadDown = new QPushButton(faceButtons_2);
        buttonDpadDown->setObjectName(QStringLiteral("buttonDpadDown"));

        verticalLayout_9->addWidget(buttonDpadDown);


        gridLayout_2->addLayout(verticalLayout_9, 1, 1, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_32 = new QLabel(faceButtons_2);
        label_32->setObjectName(QStringLiteral("label_32"));

        verticalLayout_10->addWidget(label_32);

        buttonDpadLeft = new QPushButton(faceButtons_2);
        buttonDpadLeft->setObjectName(QStringLiteral("buttonDpadLeft"));

        verticalLayout_10->addWidget(buttonDpadLeft);


        gridLayout_2->addLayout(verticalLayout_10, 0, 0, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_33 = new QLabel(faceButtons_2);
        label_33->setObjectName(QStringLiteral("label_33"));

        verticalLayout_11->addWidget(label_33);

        buttonDpadRight = new QPushButton(faceButtons_2);
        buttonDpadRight->setObjectName(QStringLiteral("buttonDpadRight"));

        verticalLayout_11->addWidget(buttonDpadRight);


        gridLayout_2->addLayout(verticalLayout_11, 0, 1, 1, 1);


        gridLayout_7->addWidget(faceButtons_2, 0, 1, 1, 1);

        faceButtons_3 = new QGroupBox(ConfigureInput);
        faceButtons_3->setObjectName(QStringLiteral("faceButtons_3"));
        faceButtons_3->setFlat(false);
        faceButtons_3->setCheckable(false);
        gridLayout_3 = new QGridLayout(faceButtons_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_17 = new QLabel(faceButtons_3);
        label_17->setObjectName(QStringLiteral("label_17"));

        verticalLayout_13->addWidget(label_17);

        buttonL = new QPushButton(faceButtons_3);
        buttonL->setObjectName(QStringLiteral("buttonL"));

        verticalLayout_13->addWidget(buttonL);


        gridLayout_3->addLayout(verticalLayout_13, 0, 0, 1, 1);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        label_19 = new QLabel(faceButtons_3);
        label_19->setObjectName(QStringLiteral("label_19"));

        verticalLayout_14->addWidget(label_19);

        buttonR = new QPushButton(faceButtons_3);
        buttonR->setObjectName(QStringLiteral("buttonR"));

        verticalLayout_14->addWidget(buttonR);


        gridLayout_3->addLayout(verticalLayout_14, 0, 1, 1, 1);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        label_20 = new QLabel(faceButtons_3);
        label_20->setObjectName(QStringLiteral("label_20"));

        verticalLayout_15->addWidget(label_20);

        buttonZL = new QPushButton(faceButtons_3);
        buttonZL->setObjectName(QStringLiteral("buttonZL"));

        verticalLayout_15->addWidget(buttonZL);


        gridLayout_3->addLayout(verticalLayout_15, 1, 0, 1, 1);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        label_18 = new QLabel(faceButtons_3);
        label_18->setObjectName(QStringLiteral("label_18"));

        verticalLayout_16->addWidget(label_18);

        buttonZR = new QPushButton(faceButtons_3);
        buttonZR->setObjectName(QStringLiteral("buttonZR"));

        verticalLayout_16->addWidget(buttonZR);


        gridLayout_3->addLayout(verticalLayout_16, 1, 1, 1, 1);


        gridLayout_7->addWidget(faceButtons_3, 1, 0, 1, 1);

        faceButtons_4 = new QGroupBox(ConfigureInput);
        faceButtons_4->setObjectName(QStringLiteral("faceButtons_4"));
        faceButtons_4->setFlat(false);
        faceButtons_4->setCheckable(false);
        gridLayout_4 = new QGridLayout(faceButtons_4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        label_21 = new QLabel(faceButtons_4);
        label_21->setObjectName(QStringLiteral("label_21"));

        verticalLayout_17->addWidget(label_21);

        buttonCircleLeft = new QPushButton(faceButtons_4);
        buttonCircleLeft->setObjectName(QStringLiteral("buttonCircleLeft"));

        verticalLayout_17->addWidget(buttonCircleLeft);


        gridLayout_4->addLayout(verticalLayout_17, 0, 0, 1, 1);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        label_23 = new QLabel(faceButtons_4);
        label_23->setObjectName(QStringLiteral("label_23"));

        verticalLayout_18->addWidget(label_23);

        buttonCircleRight = new QPushButton(faceButtons_4);
        buttonCircleRight->setObjectName(QStringLiteral("buttonCircleRight"));

        verticalLayout_18->addWidget(buttonCircleRight);


        gridLayout_4->addLayout(verticalLayout_18, 0, 1, 1, 1);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        label_24 = new QLabel(faceButtons_4);
        label_24->setObjectName(QStringLiteral("label_24"));

        verticalLayout_19->addWidget(label_24);

        buttonCircleUp = new QPushButton(faceButtons_4);
        buttonCircleUp->setObjectName(QStringLiteral("buttonCircleUp"));

        verticalLayout_19->addWidget(buttonCircleUp);


        gridLayout_4->addLayout(verticalLayout_19, 1, 0, 1, 1);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        label_22 = new QLabel(faceButtons_4);
        label_22->setObjectName(QStringLiteral("label_22"));

        verticalLayout_20->addWidget(label_22);

        buttonCircleDown = new QPushButton(faceButtons_4);
        buttonCircleDown->setObjectName(QStringLiteral("buttonCircleDown"));

        verticalLayout_20->addWidget(buttonCircleDown);


        gridLayout_4->addLayout(verticalLayout_20, 1, 1, 1, 1);


        gridLayout_7->addWidget(faceButtons_4, 1, 1, 1, 1);

        faceButtons_5 = new QGroupBox(ConfigureInput);
        faceButtons_5->setObjectName(QStringLiteral("faceButtons_5"));
        faceButtons_5->setFlat(false);
        faceButtons_5->setCheckable(false);
        gridLayout_5 = new QGridLayout(faceButtons_5);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        label_25 = new QLabel(faceButtons_5);
        label_25->setObjectName(QStringLiteral("label_25"));

        verticalLayout_21->addWidget(label_25);

        buttonCStickLeft = new QPushButton(faceButtons_5);
        buttonCStickLeft->setObjectName(QStringLiteral("buttonCStickLeft"));

        verticalLayout_21->addWidget(buttonCStickLeft);


        gridLayout_5->addLayout(verticalLayout_21, 0, 0, 1, 1);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        label_27 = new QLabel(faceButtons_5);
        label_27->setObjectName(QStringLiteral("label_27"));

        verticalLayout_22->addWidget(label_27);

        buttonCStickRight = new QPushButton(faceButtons_5);
        buttonCStickRight->setObjectName(QStringLiteral("buttonCStickRight"));

        verticalLayout_22->addWidget(buttonCStickRight);


        gridLayout_5->addLayout(verticalLayout_22, 0, 1, 1, 1);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        label_28 = new QLabel(faceButtons_5);
        label_28->setObjectName(QStringLiteral("label_28"));

        verticalLayout_23->addWidget(label_28);

        buttonCStickUp = new QPushButton(faceButtons_5);
        buttonCStickUp->setObjectName(QStringLiteral("buttonCStickUp"));

        verticalLayout_23->addWidget(buttonCStickUp);


        gridLayout_5->addLayout(verticalLayout_23, 1, 0, 1, 1);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        label_26 = new QLabel(faceButtons_5);
        label_26->setObjectName(QStringLiteral("label_26"));

        verticalLayout_24->addWidget(label_26);

        buttonCStickDown = new QPushButton(faceButtons_5);
        buttonCStickDown->setObjectName(QStringLiteral("buttonCStickDown"));

        verticalLayout_24->addWidget(buttonCStickDown);


        gridLayout_5->addLayout(verticalLayout_24, 1, 1, 1, 1);


        gridLayout_7->addWidget(faceButtons_5, 2, 0, 1, 1);

        faceButtons_6 = new QGroupBox(ConfigureInput);
        faceButtons_6->setObjectName(QStringLiteral("faceButtons_6"));
        faceButtons_6->setFlat(false);
        faceButtons_6->setCheckable(false);
        gridLayout_6 = new QGridLayout(faceButtons_6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        label_29 = new QLabel(faceButtons_6);
        label_29->setObjectName(QStringLiteral("label_29"));

        verticalLayout_25->addWidget(label_29);

        buttonStart = new QPushButton(faceButtons_6);
        buttonStart->setObjectName(QStringLiteral("buttonStart"));

        verticalLayout_25->addWidget(buttonStart);


        gridLayout_6->addLayout(verticalLayout_25, 0, 0, 1, 1);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        label_30 = new QLabel(faceButtons_6);
        label_30->setObjectName(QStringLiteral("label_30"));

        verticalLayout_26->addWidget(label_30);

        buttonSelect = new QPushButton(faceButtons_6);
        buttonSelect->setObjectName(QStringLiteral("buttonSelect"));

        verticalLayout_26->addWidget(buttonSelect);


        gridLayout_6->addLayout(verticalLayout_26, 0, 1, 1, 1);

        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        label_31 = new QLabel(faceButtons_6);
        label_31->setObjectName(QStringLiteral("label_31"));

        verticalLayout_27->addWidget(label_31);

        buttonHome = new QPushButton(faceButtons_6);
        buttonHome->setObjectName(QStringLiteral("buttonHome"));

        verticalLayout_27->addWidget(buttonHome);


        gridLayout_6->addLayout(verticalLayout_27, 1, 0, 1, 1);

        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        label_36 = new QLabel(faceButtons_6);
        label_36->setObjectName(QStringLiteral("label_36"));

        verticalLayout_28->addWidget(label_36);

        buttonCircleMod = new QPushButton(faceButtons_6);
        buttonCircleMod->setObjectName(QStringLiteral("buttonCircleMod"));

        verticalLayout_28->addWidget(buttonCircleMod);


        gridLayout_6->addLayout(verticalLayout_28, 1, 1, 1, 1);


        gridLayout_7->addWidget(faceButtons_6, 2, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonRestoreDefaults = new QPushButton(ConfigureInput);
        buttonRestoreDefaults->setObjectName(QStringLiteral("buttonRestoreDefaults"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonRestoreDefaults->sizePolicy().hasHeightForWidth());
        buttonRestoreDefaults->setSizePolicy(sizePolicy);
        buttonRestoreDefaults->setSizeIncrement(QSize(0, 0));
        buttonRestoreDefaults->setBaseSize(QSize(0, 0));
        buttonRestoreDefaults->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(buttonRestoreDefaults);


        verticalLayout_5->addLayout(horizontalLayout);


        retranslateUi(ConfigureInput);

        QMetaObject::connectSlotsByName(ConfigureInput);
    } // setupUi

    void retranslateUi(QWidget *ConfigureInput)
    {
        ConfigureInput->setWindowTitle(QApplication::translate("ConfigureInput", "ConfigureInput", 0));
        faceButtons->setTitle(QApplication::translate("ConfigureInput", "Face Buttons", 0));
        label->setText(QApplication::translate("ConfigureInput", "A:", 0));
        buttonA->setText(QString());
        label_2->setText(QApplication::translate("ConfigureInput", "B:", 0));
        buttonB->setText(QString());
        label_3->setText(QApplication::translate("ConfigureInput", "X:", 0));
        buttonX->setText(QString());
        label_4->setText(QApplication::translate("ConfigureInput", "Y:", 0));
        buttonY->setText(QString());
        faceButtons_2->setTitle(QApplication::translate("ConfigureInput", "Directional Pad", 0));
        label_34->setText(QApplication::translate("ConfigureInput", "Up:", 0));
        buttonDpadUp->setText(QString());
        label_35->setText(QApplication::translate("ConfigureInput", "Down:", 0));
        buttonDpadDown->setText(QString());
        label_32->setText(QApplication::translate("ConfigureInput", "Left:", 0));
        buttonDpadLeft->setText(QString());
        label_33->setText(QApplication::translate("ConfigureInput", "Right:", 0));
        buttonDpadRight->setText(QString());
        faceButtons_3->setTitle(QApplication::translate("ConfigureInput", "Shoulder Buttons", 0));
        label_17->setText(QApplication::translate("ConfigureInput", "L:", 0));
        buttonL->setText(QString());
        label_19->setText(QApplication::translate("ConfigureInput", "R:", 0));
        buttonR->setText(QString());
        label_20->setText(QApplication::translate("ConfigureInput", "ZL:", 0));
        buttonZL->setText(QString());
        label_18->setText(QApplication::translate("ConfigureInput", "ZR:", 0));
        buttonZR->setText(QString());
        faceButtons_4->setTitle(QApplication::translate("ConfigureInput", "Circle Pad", 0));
        label_21->setText(QApplication::translate("ConfigureInput", "Left:", 0));
        buttonCircleLeft->setText(QString());
        label_23->setText(QApplication::translate("ConfigureInput", "Right:", 0));
        buttonCircleRight->setText(QString());
        label_24->setText(QApplication::translate("ConfigureInput", "Up:", 0));
        buttonCircleUp->setText(QString());
        label_22->setText(QApplication::translate("ConfigureInput", "Down:", 0));
        buttonCircleDown->setText(QString());
        faceButtons_5->setTitle(QApplication::translate("ConfigureInput", "C-Stick", 0));
        label_25->setText(QApplication::translate("ConfigureInput", "Left:", 0));
        buttonCStickLeft->setText(QString());
        label_27->setText(QApplication::translate("ConfigureInput", "Right:", 0));
        buttonCStickRight->setText(QString());
        label_28->setText(QApplication::translate("ConfigureInput", "Up:", 0));
        buttonCStickUp->setText(QString());
        label_26->setText(QApplication::translate("ConfigureInput", "Down:", 0));
        buttonCStickDown->setText(QString());
        faceButtons_6->setTitle(QApplication::translate("ConfigureInput", "Misc.", 0));
        label_29->setText(QApplication::translate("ConfigureInput", "Start:", 0));
        buttonStart->setText(QString());
        label_30->setText(QApplication::translate("ConfigureInput", "Select:", 0));
        buttonSelect->setText(QString());
        label_31->setText(QApplication::translate("ConfigureInput", "Home:", 0));
        buttonHome->setText(QString());
        label_36->setText(QApplication::translate("ConfigureInput", "Circle Mod:", 0));
        buttonCircleMod->setText(QString());
        buttonRestoreDefaults->setText(QApplication::translate("ConfigureInput", "Restore Defaults", 0));
    } // retranslateUi

};

namespace Ui {
    class ConfigureInput: public Ui_ConfigureInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_INPUT_H
