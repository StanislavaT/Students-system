#pragma once
#include "update_command.h"
#include<iostream>
using namespace std;

UpdateCommand::UpdateCommand(string fn, string grade): fn(fn), grade(grade){}

void UpdateCommand::execute(){
    ifstream in = getFileForRead();
    string line;
    string buff = "";
    bool found = false;
    string currFN, firstName, lastName, currGrade;
    while ( in>> currFN >> firstName >> lastName >> currGrade)
    {

       if(currFN  == fn)
       {
           found = true;
           buff += currFN +" " + firstName + " " + lastName + " " + grade+"\n";
       }
       else
       {
           buff += currFN +" " + firstName + " " + lastName + " " + currGrade + "\n";
       }
    }
    if(!found)
    {
        cout<<"Record not found!\n";
    }
    else
    {
         ofstream out = getFileForOverwrite();
         out << buff;
         cout<<"Record saved!\n"<<endl;
    }
}
