#include "connection.h"

// Test Tutoriel Git

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("oussamabousbih_2A24");//inserer le nom de la source de données ODBC
db.setUserName("system");//inserer nom de l'utilisateur
db.setPassword("azer");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
