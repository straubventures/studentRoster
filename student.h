//
//  student.hpp
//  CPPproject2.0
//
//  Created by Nathan Straub on 11/9/20.
//

#pragma once

#include "degree.h"
#include <iostream>

using namespace std;

class Student
{

public:
    Student();
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);

    string getStudentID() const;
    string getFirstName() const;
    string getLastName() const;
    string getEmailAddress() const;
    int getAge() const;
    int getDaysLeftOfCourse1() const;
    int getDaysLeftOfCourse2() const;
    int getDaysLeftOfCourse3() const;
    DegreeProgram getDegreeProgram() const;

    void SetStudentID(string userStudentID); // Mutator
    void setFirstName(string userFirstName);
    void setLastName(string userLastName);
    void setEmailAddress(string userEmailAddress);
    void setAge(int userAge);
    void setDaysLeftOfCourse1(int userDaysLeftOfCourse1);
    void setDaysLeftOfCourse2(int userDaysLeftOfCourse2);
    void setDaysLeftOfCourse3(int userDaysLeftOfCourse3);
    void setDegreeProgram(DegreeProgram userDegreeProgram);

    void static printHeader();

    void print();

    ~Student();

private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysLeftOfCourse1;
    int daysLeftOfCourse2;
    int daysLeftOfCourse3;
    DegreeProgram degreeProgram;
};

