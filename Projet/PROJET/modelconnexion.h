#ifndef MODELCONNEXION_H
#define MODELCONNEXION_H
#include <QSqlDatabase>
#include <QString>
#include <QMessageBox>
#include <QSqlError>

#include <QWidget>

class ModelConnexion : public QWidget
{
    Q_OBJECT
public:
    explicit ModelConnexion(QWidget *parent = 0);
       bool connecterBaseDeDonnees();
private:
     QSqlDatabase db; // Objet de base de données

signals:

public slots:
};






#endif // MODELCONNEXION_H
