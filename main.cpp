#include <iostream>
#include "command.cpp"
#include "create_command.cpp"
#include "search_command.cpp"
#include "update_command.cpp"
#include "delete_command.cpp"
#include "command_parser.cpp"
#include "build_command.cpp"
#include "searchlog_command.cpp"
using namespace std;

int main(){
    CommandParser parser;
    Command* x;
    while(x = parser.parse(cin)){
        x->execute();
    }
}
