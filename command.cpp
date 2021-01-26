#include "command.h"
using namespace std;

const string filename = "StudentsGrades.db";
const string index = "FacultyNumber.ids";

ifstream Command::getFileForRead(){
    ifstream in;
    in.open(filename);
    return in;
}

ofstream Command::getFileForWrite(){
    ofstream out;
    out.open(filename, ofstream::app);
    return out;
}
ofstream Command::getFileForOverwrite(){
    ofstream out;
    out.open(filename, ofstream::trunc);
    return out;
}

ifstream Command::getIndexForRead(){
    ifstream in;
    in.open(index, ifstream::binary);
    return in;
}
ofstream Command::getIndexForOverwrite(){
    ofstream out;
    out.open(index, ofstream::trunc | ofstream::binary);
    return out;
}
