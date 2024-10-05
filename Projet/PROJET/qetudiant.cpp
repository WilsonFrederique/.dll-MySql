#include "qetudiant.h"
#include "ui_qetudiant.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>


Qetudiant::Qetudiant(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Qetudiant)
{
    ui->setupUi(this);


    // Initialisation du modèle
    model = new QStandardItemModel(0, 6, this); // 0 lignes, 6 colonnes
    model->setHeaderData(0, Qt::Horizontal, "Matricule");
    model->setHeaderData(1, Qt::Horizontal, "Nom");
    model->setHeaderData(2, Qt::Horizontal, "Prenom");
    model->setHeaderData(3, Qt::Horizontal, "Age");
    model->setHeaderData(4, Qt::Horizontal, "Niveau");
    model->setHeaderData(5, Qt::Horizontal, "Adresse");

    ui->tbletudiant->setModel(model); // Associe le modèle à la vue
}

Qetudiant::~Qetudiant()
{
    delete ui;
}

void Qetudiant::on_btnenregistrer_clicked()
{
    // Récupération des données des champs de saisie
       QString Matricule = ui->txtmatricule->text();
       QString Nom = ui->txtnom->text();
       QString Prenom = ui->txtprenom->text();
       QString Age = ui->txtage->text();
       QString Niveau = ui->txtniveau->text();
       QString Adresse = ui->txtadresse->text();

       // Vérification si les champs ne sont pas vides
       if (Matricule.isEmpty() || Nom.isEmpty() || Prenom.isEmpty() || Age.isEmpty() || Niveau.isEmpty() || Adresse.isEmpty()) {
           QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs.");
           return;
       }

       // Insérer les données dans la base de données
         QSqlQuery query;
         query.prepare("INSERT INTO etudiant (Matricule, Nom, Prenom, Age, Niveau, Adresse) VALUES (:nom, :prenom, :age, :email, :telephone, :adresse)");
         query.bindValue(":nom", Matricule);
         query.bindValue(":prenom", Nom);
         query.bindValue(":age", Prenom);
         query.bindValue(":email", Age);
         query.bindValue(":telephone", Niveau);
         query.bindValue(":adresse", Adresse);

         if (!query.exec()) {
             QMessageBox::critical(this, "Erreur d'insertion", query.lastError().text());
         }

         else
         {
       // Ajout des données au modèle
       QList<QStandardItem*> rowItems;
       rowItems << new QStandardItem(Matricule)
                << new QStandardItem(Nom)
                << new QStandardItem(Prenom)
                << new QStandardItem(Age)
                << new QStandardItem(Niveau)
                << new QStandardItem(Adresse);

       model->appendRow(rowItems); // Ajout de la ligne au modèle

       // Réinitialisation des champs de saisie
       ui->txtmatricule->clear();
       ui->txtnom->clear();
       ui->txtprenom->clear();
       ui->txtage->clear();
       ui->txtniveau->clear();
       ui->txtadresse->clear();
       }
}
