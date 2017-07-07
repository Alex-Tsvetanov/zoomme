/********************************************************************************
** Form generated from reading UI file 'zoomwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZOOMWIDGET_H
#define UI_ZOOMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zoomwidget
{
public:

    void setupUi(QWidget *zoomwidget)
    {
        if (zoomwidget->objectName().isEmpty())
            zoomwidget->setObjectName(QStringLiteral("zoomwidget"));
        zoomwidget->resize(521, 324);

        retranslateUi(zoomwidget);

        QMetaObject::connectSlotsByName(zoomwidget);
    } // setupUi

    void retranslateUi(QWidget *zoomwidget)
    {
        zoomwidget->setWindowTitle(QApplication::translate("zoomwidget", "zoomwidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class zoomwidget: public Ui_zoomwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZOOMWIDGET_H
