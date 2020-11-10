/*
main.cpp
CPPproject2.0

C867 Scripting and Programming - Applications
Language Used: C++
Student ID: 001514364
Nathan Straub

 */

#include "roster.h"

const string studentDataTable[5] =

    {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
     "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
     "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
     "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
     "A5,Nathan,Straub,nstrau3@wgu.edu,28,30,30,30,SOFTWARE"};

int main()
{
    
    cout << "C867 Scripting and Programming - Applications\nLanguage Used: C++\nStudent ID: 001514364\nNathan Straub" << endl << endl;
    
    const int numStudents = 5;
    Roster classRoster;
    for (int i = 0; i < numStudents; i++)
    {
        classRoster.parse(studentDataTable[i]);
    };
    cout << "Displaying All Students: " << std::endl;
    classRoster.printAll();
    cout << std::endl;

   
    
    cout << "Displaying Students enrolled in Software Program: " << std::endl;
    classRoster.printByDegreeProgram(SOFTWARE);
    

    cout << "Displaying Students with Invalid Emails: " << std::endl;
    classRoster.printInvalidEmails();
    cout << std::endl;

    cout << "Displaying Average Days to Course Completion for StudentID A5: " << std::endl;
    classRoster.printAverageDaysInCourse("A5");
    cout << std::endl;

    cout << "Removing Student From Roster: ID = A3" << std::endl;
    classRoster.remove("A3");
    cout << std::endl;
    

    cout << "Removing Student From Roster: ID = A3" << std::endl;
    classRoster.remove("A3");
    cout << std::endl;
}
