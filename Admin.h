#ifndef ADMIN_H
#define ADMIN_H

#include "user.h"
#include <string>

class Admin : public User
{
public:

    // constructor

    Admin();
    Admin(std::string first);
    Admin(std::string first, std::string last);
    Admin(std::string first, std::string last, int ID);
/*
    // method
    void addCourse(sqlite3* DB, string course);
    void removeCourse(sqlite3* DB, int CRN);
    void addUser();
    void removeUser();
    void addStudent();
    void removeStudent();
    void searchRoster();
    void printCourses();

    // destructor
    ~Admin();
    */
};

#endif // ADMIN_H
