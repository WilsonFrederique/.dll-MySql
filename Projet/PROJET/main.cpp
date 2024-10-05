#include "qetudiant.h"
#include <QApplication>
#include "modelconnexion.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Qetudiant w;
    w.show();

    ModelConnexion model; // Créer une instance de ModelConnexion

      if (!model.connecterBaseDeDonnees()) {
          return -1; // Quitter si la connexion échoue
      }

      // Votre logique pour afficher la fenêtre principale
    return a.exec();
}
