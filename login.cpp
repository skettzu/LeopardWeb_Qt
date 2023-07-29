#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    QSqlDatabase LB_DB = QSqlDatabase::addDatabase("QSQLITE");
    LB_DB.setDatabaseName("D:/DB/LeopardWeb_Implementation.db");

    if(!LB_DB.open()){
        ui->label_3->setText(("Failed to open the database"));
    }
    else{
        ui->label_3->setText("Connected...");
    }
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "test" && password == "test"){
        QMessageBox::information(this, "Login", "Username and password is correct");
    }
    else {
        QMessageBox::warning(this,"Login", "Username and password is not correct");
    }
}

