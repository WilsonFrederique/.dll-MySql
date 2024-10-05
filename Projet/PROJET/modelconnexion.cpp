#include "modelconnexion.h"
#include <QMessageBox>
#include <QSqlError>

ModelConnexion::ModelConnexion(QWidget *parent) : QWidget(parent)
{

}

bool ModelConnexion::connecterBaseDeDonnees() {
    // Connexion à MySQL
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost"); // Hôte
    db.setDatabaseName("projet"); // Remplacez par le nom de votre base de données
    db.setUserName("root"); // Utilisateur
    db.setPassword(""); // Mot de passe (vide par défaut)

    if (!db.open()) {
        QMessageBox::critical(nullptr, "Erreur de connexion", db.lastError().text());
        return false;
    }
    else
    {
       // QMessageBox::information(nullptr, "Titre", "CONNEXION REUSSI");
    }
    return true;
}

