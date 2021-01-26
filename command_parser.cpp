#include "command_parser.h"
#include "create_command.h"
#include "search_command.h"
#include "update_command.h"
#include "delete_command.h"
#include "searchlog_command.h"
#include "build_command.h"
using namespace std;

Command* CommandParser::parse(istream& in){
    string type;
    in>>type;
    if (type == "create"){
        long long fn;
        string firstName, lastName;
        double grade;
        in>>fn>>firstName>>lastName>>grade;
        return (new CreateCommand(fn, firstName, lastName, grade));
    }
    if (type == "sequentialSearch"){
        string fn;
        in>>fn;
        return (new SearchCommand(fn));
    }
    if (type == "search"){
        long long fn;
        in>>fn;
        return (new SearchLogCommand(fn));
    }
    if (type == "buildIndex"){
        return (new BuildCommand());
    }
    if (type == "update"){
        string fn;
        string grade;
        in>>fn>>grade;
        return (new UpdateCommand(fn, grade));
    }
    if (type == "delete"){
        string fn;
        in>>fn;
        return (new DeleteCommand(fn));
    }
    if (type == "exit"){
        return nullptr;
    }
}
