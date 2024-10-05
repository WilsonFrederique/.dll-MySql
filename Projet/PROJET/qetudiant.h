#ifndef QETUDIANT_H
#define QETUDIANT_H

#include <QWidget>
#include <QStandardItemModel>


namespace Ui {
class Qetudiant;
}

class Qetudiant : public QWidget
{
    Q_OBJECT

public:
    explicit Qetudiant(QWidget *parent = 0);
    ~Qetudiant();

private slots:

    void on_btnenregistrer_clicked();  // Slot pour le bouton "Ajouter"

private:
    Ui::Qetudiant *ui;
     QStandardItemModel *model; // Modèle pour la table
};

#endif // QETUDIANT_H
