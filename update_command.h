#pragma once
#include "command.h"
#include <string>
using namespace std;

class UpdateCommand : public Command{
private:
    string fn;
    string grade;
public:
    UpdateCommand(string fn, string grade);
    void execute();
};
