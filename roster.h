//
//  roster.h
//  CPPproject2.0
//
//  Created by Nathan Straub on 11/9/20.
//

#pragma once
#include "student.h"

class Roster
{
public:
    int lastIndex = -1;
    const static int numStudents = 5;
    Student *classRosterArray[numStudents];

public:
    void parse(string studentData);
    void add(string studentID,
             string firstName,
             string lastName,
             string emailAddress,
             int age, int daysInCourse1,
             int daysInCourse2,
             int daysInCourse3,
             DegreeProgram degreeprogram);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);
    ~Roster();
};
