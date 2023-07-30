#ifndef STUDENT_H
#define STUDENT_H

#include "user.h"

class Student : public User
{
public:
    // constructor
    Student();
    Student(string first);
    Student(string first, string last);
    Student(string first, string last, int ID);
    /*/ method
    void addCourse(sqlite3* DB, string user_crn);
    void dropCourse(sqlite3* DB, string user_crn);
    void printSchedule();
    */
    //destructor
    ~Student();
};

#endif // STUDENT_H
