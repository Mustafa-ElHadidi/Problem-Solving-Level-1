#include<iostream>
using namespace std;
struct stInfo{
    string fristname;
    string lastname;
};

stInfo Readinfo(){
    stInfo info;
    cout<<"Please enter your frist name? "<<endl;
    getline(cin,info.fristname);
    cout<<"Please enter your last name? "<<endl;
    cin>>info.lastname;
    return info;
}

string Getfullname(stInfo info){
string fullname;
fullname=info.fristname+" "+info.lastname;
return fullname;
}

void PrintFullname(string fullname){
    cout<<"\n your fullname is "<<fullname<<endl;
}

int main(){
PrintFullname(Getfullname(Readinfo()));
return 0;

}
