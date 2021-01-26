#pragma once
#include "delete_command.h"
#include<iostream>
using namespace std;

DeleteCommand::DeleteCommand(string fn): fn(fn){}

void DeleteCommand::execute(){
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
         cout<<"Record deleted!\n"<<endl;
    }
}
