#pragma once
#include "search_command.h"
#include<iostream>
using namespace std;

SearchCommand::SearchCommand(string fn): fn(fn){}

void SearchCommand::execute(){
    ifstream in = getFileForRead();
    string line;
    bool found = false;
    while ( getline(in,  line))
    {
        string number = "";
        for(int i=0; line[i] != ' '; i++)
        {
            number += line[i];
        }
        if(number == fn)
        {
            cout<<line<<endl;
            found = true;
            return;
        }
    }
    if(!found)
    {
        cout<<"Record not found!\n";
    }
}
