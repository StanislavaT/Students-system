#pragma once
#include <iostream>
#include "command.h"
using namespace std;

class CommandParser{
public:
    Command* parse(istream& in);
};
