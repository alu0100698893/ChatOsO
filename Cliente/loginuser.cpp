#include "loginuser.h"
#include "ui_loginuser.h"

LoginUser::LoginUser(QString ip_server, quint16 port_server ,QString sala, bool crear_sala, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginUser),
    ipserver_(ip_server),
    portserver_(port_server),
    namesala(sala),
    crearsala(crear_sala)
{
    ui->setupUi(this);
}

LoginUser::~LoginUser()
{
    delete ui;
}

void LoginUser::on_pushButtonEntrar_clicked()
{
    QString username = ui->lineEditUsername->text();
    QString password = ui->lineEditPassword->text();
    mySocket = new My_Socket_Cliente(ipserver_, portserver_, username, password);
    ChatWindows chat(crearsala, namesala, mySocket);
    mySocket->sslSocket->waitForReadyRead(3000);
    if(mySocket->logeado == true ){
        qDebug() << "entra al login";
        this->hide();
        chat.exec();

    }
    else{
        QMessageBox::critical(NULL, "Error", "Usuario no registrado");
    }
}
