/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QTableWidget *serviceTable;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *win32;
    QRadioButton *driver;
    QSpacerItem *horizontalSpacer;
    QPushButton *startBtn;
    QPushButton *stopBtn;
    QPushButton *exitBtn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(588, 357);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        serviceTable = new QTableWidget(widget);
        if (serviceTable->columnCount() < 3)
            serviceTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        serviceTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        serviceTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        serviceTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        serviceTable->setObjectName(QString::fromUtf8("serviceTable"));

        horizontalLayout->addWidget(serviceTable);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(Widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        win32 = new QRadioButton(widget_2);
        win32->setObjectName(QString::fromUtf8("win32"));
        win32->setEnabled(true);
        win32->setCheckable(true);
        win32->setChecked(true);

        horizontalLayout_2->addWidget(win32);

        driver = new QRadioButton(widget_2);
        driver->setObjectName(QString::fromUtf8("driver"));

        horizontalLayout_2->addWidget(driver);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        startBtn = new QPushButton(widget_2);
        startBtn->setObjectName(QString::fromUtf8("startBtn"));
        startBtn->setEnabled(true);

        horizontalLayout_2->addWidget(startBtn);

        stopBtn = new QPushButton(widget_2);
        stopBtn->setObjectName(QString::fromUtf8("stopBtn"));

        horizontalLayout_2->addWidget(stopBtn);

        exitBtn = new QPushButton(widget_2);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));

        horizontalLayout_2->addWidget(exitBtn);


        verticalLayout->addWidget(widget_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\346\234\215\345\212\241\347\256\241\347\220\206\345\231\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem = serviceTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Widget", "\346\234\215\345\212\241\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = serviceTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = serviceTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Widget", "\347\212\266\346\200\201", nullptr));
        win32->setText(QCoreApplication::translate("Widget", "Win32\346\234\215\345\212\241", nullptr));
        driver->setText(QCoreApplication::translate("Widget", "\351\251\261\345\212\250\347\250\213\345\272\217\346\234\215\345\212\241", nullptr));
        startBtn->setText(QCoreApplication::translate("Widget", "\345\220\257\345\212\250", nullptr));
        stopBtn->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242", nullptr));
        exitBtn->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
