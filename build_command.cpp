#pragma once
#include "build_command.h"
#include "student.cpp"
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

void BuildCommand::execute(){
    vector<Student> students;
    ifstream in = getFileForRead();
    int fn, grade;
    string firstName, lastName;
    while (in>>fn>>firstName>>lastName>>grade){
        Student x;
        x.fn = fn;
        strcpy(x.firstName, firstName.c_str());
        strcpy(x.lastName, lastName.c_str());
        x.grade = grade;
        students.push_back(x);
    }
    sort(students.begin(), students.end());
    ofstream out = getIndexForOverwrite();
    for (int i=0; i<students.size(); ++i){
        out.write((char*) &students[i], sizeof(Student));
    }
}
