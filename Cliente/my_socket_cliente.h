#ifndef MY_SOCKET_CLIENTE_H
#define MY_SOCKET_CLIENTE_H

#include <QObject>
#include <QSslSocket>

class My_Socket_Cliente : public QObject
{
    Q_OBJECT
private:
    QSslSocket* sslSocket;//socket que vamos a utilizar

public:
    explicit My_Socket_Cliente(QString dir_server, quint16 port_server, QString dir_socket_client, QObject *parent = 0);


signals:

public slots:
    void ready();
    void readyRead();
};

#endif // MY_SOCKET_CLIENTE_H
