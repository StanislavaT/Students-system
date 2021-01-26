#include "create_command.h"
#include<iostream>
using namespace std;

CreateCommand::CreateCommand(long long fn, string firstName, string lastName, int grade): fn(fn), firstName(firstName), lastName(lastName), grade(grade){}

void CreateCommand::execute(){
    ofstream out = getFileForWrite();
    out<<fn<<" "<<firstName<<" "<<lastName<<" "<<grade<<endl;
    cout<<"Record saved!\n";
}
