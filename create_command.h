#pragma once
#include "command.h"
#include <string>
using namespace std;

class CreateCommand : public Command{
private:
    long long fn;
    string firstName, lastName;
    double grade;
public:
    CreateCommand(long long fn, string firstName, string lastName, int grade);
    void execute();
};
