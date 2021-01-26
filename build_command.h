#pragma once
#include "command.h"
#include <string>
using namespace std;

class BuildCommand : public Command{
public:
    void execute();
};
