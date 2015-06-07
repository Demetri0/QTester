#pragma once
#ifndef USER_H
#define USER_H

#include <QString>
#include <QCryptographicHash>

class User
{
private:
    QString _name;
    QString _apiVersion = "1.0";
public:
    User()
    {
    }
    User( const QString &name, const QString & = "1.0" );

    QString getName();
    QString getApiVersion();
    QString getToken();
    bool compareToken( const QString &token );

    void setName( const QString &name );
    void setApiVersion( const QString &version );
    void setToken( const QString &token );
};

namespace Table
{
    namespace Users
    {
        const QString TABLE_NAME = "Users";

        namespace Fields
        {
            const QString USER_ID = "USER_ID";
            const QString FIRSTNAME = "firstName";
            const QString SECONDNAME = "secondName";
            const QString LOGIN = "login";
            const QString PASSWORD = "password";
            const QString USERGROPE_ID = "userGrope_id";
        }
    }

    namespace UserGropes
    {
        const QString TABLE_NAME = "UserGropes";

        namespace Fields
        {
            const QString USERGROPE_ID = "userGrope_id";
            const QString NAME = "name";
            const QString TITLE = "title";
        }
    }

}
#endif