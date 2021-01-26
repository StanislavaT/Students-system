#pragma once
#include <fstream>
using namespace std;

class Command{
public:
    virtual void execute() = 0;
protected:
    ifstream getFileForRead();
    ofstream getFileForWrite();
    ofstream getFileForOverwrite();
    ifstream getIndexForRead();
    ofstream getIndexForOverwrite();
};
