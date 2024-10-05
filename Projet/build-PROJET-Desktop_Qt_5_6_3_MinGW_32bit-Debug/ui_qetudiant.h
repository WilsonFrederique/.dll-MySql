/********************************************************************************
** Form generated from reading UI file 'qetudiant.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QETUDIANT_H
#define UI_QETUDIANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qetudiant
{
public:
    QTableView *tbletudiant;
    QLineEdit *txtmatricule;
    QLineEdit *txtnom;
    QLineEdit *txtage;
    QLineEdit *txtniveau;
    QLineEdit *txtadresse;
    QLineEdit *txtprenom;
    QPushButton *btnenregistrer;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *Qetudiant)
    {
        if (Qetudiant->objectName().isEmpty())
            Qetudiant->setObjectName(QStringLiteral("Qetudiant"));
        Qetudiant->resize(1295, 681);
        tbletudiant = new QTableView(Qetudiant);
        tbletudiant->setObjectName(QStringLiteral("tbletudiant"));
        tbletudiant->setGeometry(QRect(650, 10, 631, 661));
        txtmatricule = new QLineEdit(Qetudiant);
        txtmatricule->setObjectName(QStringLiteral("txtmatricule"));
        txtmatricule->setGeometry(QRect(210, 80, 321, 51));
        txtnom = new QLineEdit(Qetudiant);
        txtnom->setObjectName(QStringLiteral("txtnom"));
        txtnom->setGeometry(QRect(210, 170, 321, 51));
        txtage = new QLineEdit(Qetudiant);
        txtage->setObjectName(QStringLiteral("txtage"));
        txtage->setGeometry(QRect(220, 350, 321, 51));
        txtniveau = new QLineEdit(Qetudiant);
        txtniveau->setObjectName(QStringLiteral("txtniveau"));
        txtniveau->setGeometry(QRect(220, 440, 321, 51));
        txtadresse = new QLineEdit(Qetudiant);
        txtadresse->setObjectName(QStringLiteral("txtadresse"));
        txtadresse->setGeometry(QRect(230, 530, 321, 51));
        txtprenom = new QLineEdit(Qetudiant);
        txtprenom->setObjectName(QStringLiteral("txtprenom"));
        txtprenom->setGeometry(QRect(210, 260, 321, 51));
        btnenregistrer = new QPushButton(Qetudiant);
        btnenregistrer->setObjectName(QStringLiteral("btnenregistrer"));
        btnenregistrer->setGeometry(QRect(220, 607, 211, 51));
        label = new QLabel(Qetudiant);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 80, 141, 41));
        label_2 = new QLabel(Qetudiant);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 170, 141, 41));
        label_3 = new QLabel(Qetudiant);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 260, 141, 41));
        label_4 = new QLabel(Qetudiant);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 350, 141, 41));
        label_5 = new QLabel(Qetudiant);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 440, 141, 41));
        label_6 = new QLabel(Qetudiant);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 520, 141, 41));

        retranslateUi(Qetudiant);

        QMetaObject::connectSlotsByName(Qetudiant);
    } // setupUi

    void retranslateUi(QWidget *Qetudiant)
    {
        Qetudiant->setWindowTitle(QApplication::translate("Qetudiant", "Qetudiant", Q_NULLPTR));
        btnenregistrer->setText(QApplication::translate("Qetudiant", "ENREGISTER", Q_NULLPTR));
        label->setText(QApplication::translate("Qetudiant", "MATRICULE:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Qetudiant", "NOM:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Qetudiant", "PRENOM:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Qetudiant", "AGE:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Qetudiant", "NIVEAU:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Qetudiant", "ADRESSE::", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Qetudiant: public Ui_Qetudiant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QETUDIANT_H
