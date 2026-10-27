/**
#include<iostream>
using namespace std;
struct stInfo{
    int age;
    bool HasDrivingLicensel;
};

void ReadInfo(stInfo &info){
      
    cout<<"please enter your Age? "<<endl;
    cin>>info.age;
    cout<<"Do you have driver license? Answer (0,1)"<<endl;
    cin>>info.HasDrivingLicensel;
    

}

bool IsAccepted(stInfo info){

return(info.age>21 && info.HasDrivingLicensel );

};

void printResult(stInfo info){
    if(IsAccepted(info))
    cout<<"\n Hired"<<endl;
    else
    cout<<"\n Rejected"<<endl;

}

int main(){
    stInfo person;
    ReadInfo(person);
    printResult(person);

    

return 0;
}

*/

//Another solution that equal this solution ........................
#include<iostream>>
using namespace std;

struct stInfo{
    int age;
    bool HasDrivingLicensel;
};

stInfo ReadInfo(){
    stInfo info;
      
    cout<<"please enter your Age? "<<endl;
    cin>>info.age;
    cout<<"Do you have driver license? Answer (0,1)"<<endl;
    cin>>info.HasDrivingLicensel;
    return info;
}

bool IsAccepted(stInfo info){

return(info.age>21 && info.HasDrivingLicensel );

};

void printResult(stInfo info){
    if(IsAccepted(info))
    cout<<"\n Hired"<<endl;
    else
    cout<<"\n Rejected"<<endl;

}

int main(){
    printResult(ReadInfo());


return 0;

}