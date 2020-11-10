//
//  student.cpp
//  CPPproject2.0
//
//  Created by Nathan Straub on 11/9/20.
//

#include "student.h"
using namespace std;

Student::Student()
{
    this->studentID = "";
    this->firstName = "";
    this->lastName = "";
    this->emailAddress = "";
    this->age = 0;
    this->daysLeftOfCourse1 = 0;
    this->daysLeftOfCourse2 = 0;
    this->daysLeftOfCourse3 = 0;
    this->degreeProgram = DegreeProgram::UNDECIDED;
}
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    this->daysLeftOfCourse1 = daysInCourse1;
    this->daysLeftOfCourse2 = daysInCourse2;
    this->daysLeftOfCourse3 = daysInCourse3;
    this->degreeProgram = degreeProgram;
};

void Student::SetStudentID(string userStudentID)
{
    this->studentID = userStudentID;
}

void Student::setFirstName(string userFirstName)
{
    this->firstName = userFirstName;
}
void Student::setLastName(string userLastName)
{
    this->lastName = userLastName;
}
void Student::setEmailAddress(string userEmailAddress)
{
    this->emailAddress = userEmailAddress;
}
void Student::setAge(int userAge)
{
    this->age = userAge;
}
void Student::setDaysLeftOfCourse1(int userDaysLeftOfCourse1)
{
    this->daysLeftOfCourse1 = userDaysLeftOfCourse1;
}
void Student::setDaysLeftOfCourse2(int userDaysLeftOfCourse2)
{
    daysLeftOfCourse2 = userDaysLeftOfCourse2;
}
void Student::setDaysLeftOfCourse3(int userDaysLeftOfCourse3)
{
    this->daysLeftOfCourse3 = userDaysLeftOfCourse3;
}
void Student::setDegreeProgram(DegreeProgram userDegreeProgram)
{
    this->degreeProgram = userDegreeProgram;
}

void Student::printHeader()
{
    cout << "Output Format: ID|Title|Author|Prices|Type\n";
}

void Student::print()
{
    cout << this->getStudentID() << "\t";
    cout << this->getFirstName() << "\t";
    cout << this->getLastName() << "\t";
    cout << this->getEmailAddress() << "\t";
    cout << this->getAge() << "\t";
    cout << this->getDaysLeftOfCourse1() << "\t";
    cout << this->getDaysLeftOfCourse2() << "\t";
    cout << this->getDaysLeftOfCourse3() << "\t";
    cout << this->getDegreeProgram() << "\t";
    cout << endl;
}

string Student::getStudentID() const
{
    return this->studentID;
}
string Student::getFirstName() const
{
    return this->firstName;
}
string Student::getLastName() const
{
    return this->lastName;
}

string Student::getEmailAddress() const
{
    return this->emailAddress;
}

int Student::getAge() const
{
    return this->age;
}
int Student::getDaysLeftOfCourse1() const
{
    return this->daysLeftOfCourse1;
}
int Student::getDaysLeftOfCourse2() const
{
    return this->daysLeftOfCourse2;
}
int Student::getDaysLeftOfCourse3() const
{
    return this->daysLeftOfCourse3;
}

DegreeProgram Student::getDegreeProgram() const
{
    return this->degreeProgram;
}

Student::~Student(){};
