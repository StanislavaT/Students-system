#pragma once
#include "command.h"
#include <string>
using namespace std;

class DeleteCommand : public Command{
private:
    string fn;
public:
    DeleteCommand(string fn);
    void execute();
};
