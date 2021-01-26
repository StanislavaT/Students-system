#pragma once
#include "command.h"
#include <string>
using namespace std;

class SearchCommand : public Command{
private:
    string fn;
public:
    SearchCommand(string fn);
    void execute();
};
