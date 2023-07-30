#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    User default_usr;
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
    QSqlQuery q;

    if(q.exec(("SELECT 1 FROM CREDENTIAL WHERE (Username = '" + username + "' AND Password = '" + password + "'); "))){ // check if query is valid
        int count=0;
        while(q.next()){    // checks if there is next element in resulting table
            count++;
        }
        if(count==0){       // if there is nothing in resulting table, return warning
            QMessageBox::warning(this, "Login", "Username and password is not correct");
        }
        else {
            QMessageBox::information(this,"Login", "Username and password is correct");
        }
    }
    else{
        QMessageBox::warning(this, "Login", "Query Did Not Execute!");
    }
}

