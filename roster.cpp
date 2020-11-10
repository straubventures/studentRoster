//
//  roster.cpp
//  CPPproject2.0
//
//  Created by Nathan Straub on 11/9/20.
//

#include "roster.h"

void Roster::parse(string studentData)
{
    int rhs = studentData.find(",");
    string sid = studentData.substr(0, rhs);

    int lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    string fn = studentData.substr(lhs, rhs - lhs);

    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    string ln = studentData.substr(lhs, rhs - lhs);

    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    string ea = studentData.substr(lhs, rhs - lhs);

    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    int age = stoi(studentData.substr(lhs, rhs - lhs));

    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    int dLIC1 = stoi(studentData.substr(lhs, rhs - lhs));

    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    int dLIC2 = stoi(studentData.substr(lhs, rhs - lhs));

    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    int dLIC3 = stoi(studentData.substr(lhs, rhs - lhs));

    DegreeProgram dp = UNDECIDED;
    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    if (studentData.at(lhs) == 'S')
    {
        if (studentData.at(lhs + 1) == 'O')
        {
            dp = SOFTWARE;
        }
        else
        {
            dp = SECURITY;
        }
    }
    else if (studentData.at(lhs) == 'N')
    {
        dp = NETWORK;
    }
    add(sid, fn, ln, ea, age, dLIC1, dLIC2, dLIC3, dp);
};

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{
    classRosterArray[++lastIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
};

void Roster::printAll()
{
    Student::printHeader();
    for (int i = 0; i <= Roster::lastIndex; i++)
    {
        Roster::classRosterArray[i]->print();
    }
};

void Roster::printByDegreeProgram(DegreeProgram dp)
{
    
    Student::printHeader();
    for (int i = 0; i <= Roster::lastIndex; i++)
    {
 
        if (Roster::classRosterArray[i]->getDegreeProgram() == dp)
            Roster::classRosterArray[i]->print();
    }
    cout << std::endl;
};

void Roster::printInvalidEmails()
{
    bool any = false;
    for (int i = 0; i <= Roster::lastIndex; i++)
    
    {
        string ea = classRosterArray[i]->getEmailAddress();
        if (ea.find('@') == string::npos || ea.find('.') == string::npos || ea.find(" ") != string::npos)
        {
            any = true;
            cout << ea << ": " << classRosterArray[i]->getFirstName() << std::endl;
        }
    }
    if (!any)
        cout << "NONE" << std::endl;
}

void Roster::printAverageDaysInCourse(string sid)
{
    Student::printHeader();
    bool any = false;
    for (int i = 0; i <= Roster::lastIndex; i++)
    {
        if (Roster::classRosterArray[i]->getStudentID() == sid)
        {
            any = true;
            int day1 = classRosterArray[i]->getDaysLeftOfCourse1();
            int day2 = classRosterArray[i]->getDaysLeftOfCourse2();
            int day3 = classRosterArray[i]->getDaysLeftOfCourse3();
            double avg = (day1 + day2 + day3) / 3.0;
            cout << "Average Days to Completion: " << avg << endl;
        }
    }
    if (!any)
    {
        cout << "Not Found" << endl;
    }
};

void Roster::remove(string sid)
{
    Student::printHeader();
    bool success = false;
    for (int i = 0; i <= Roster::lastIndex; i++)
    {
        if (Roster::classRosterArray[i]->getStudentID() == sid)
        {
            success = true;
            if (i < numStudents - 1)
            {
                Student *temp = classRosterArray[i];
                classRosterArray[i] = classRosterArray[numStudents - 1];
                classRosterArray[numStudents - 1] = temp;
            }
            Roster::lastIndex--;
        }
    }
        if (success)
        {
            cout << sid << " removed from roster." << std::endl
                 << std::endl;
            this->printAll();
        }
        else
            cout << sid << " not found" << std::endl;
    
}
Roster::~Roster()
{
    cout << "Destructor activated" << std::endl;
    for (int i = 0; i < numStudents; i++)
    {
        cout << "Destroying Student Number:" << i + 1 << std::endl;
        delete classRosterArray[i];
        classRosterArray[i] = nullptr;
    }
    cout << "All students detroyed" << endl;
}
