#include "searchlog_command.h"
#include "student.cpp"

SearchLogCommand::SearchLogCommand(long long fn):fn(fn){}

void SearchLogCommand::execute(){
    ifstream in = getIndexForRead();
    in.seekg(0, in.end);
    int n = in.tellg()/sizeof(Student);
    int l=0, r=n;
    while (l+1 < r){
        int m = (l+r)/2;
        in.seekg(m*sizeof(Student));
        Student x;
        in.read((char*)&x, sizeof(Student));
        if (x.fn <= fn) l = m;
        else r = m;
    }
    in.seekg(l*sizeof(Student));
    Student ans;
    in.read((char*)&ans, sizeof(Student));
    if (ans.fn == fn){
        cout<<ans.fn<<" "<<ans.firstName<<" "<<ans.lastName<<" "<<ans.grade<<"\n";
    }else{
        cout<<"Record not found\n";
    }
}
