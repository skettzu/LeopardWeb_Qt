#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    QSqlDatabase LB_DB = QSqlDatabase::addDatabase("QSQLITE");  // Add SQLITE DATABASE
    LB_DB.setDatabaseName("D:/DB/LeopardWeb_Implementation.db");// Set to database path you want to use

    if(!LB_DB.open()){  // Check for database connection
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

