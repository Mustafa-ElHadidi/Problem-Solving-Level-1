#include<iostream>
using namespace std;
struct stInfo{

    int age;
    bool HasDrivingLicense;
    bool HasRecommendation;
};

stInfo ReadInfo(){
    stInfo info;
    cout<<"enter your age "<<endl;
    cin>>info.age;
    cout<<"Do You have a drivinglicense? (0,1) "<<endl;
    cin>>info.HasDrivingLicense;
    cout<<"Do you have a recommendation? (0,1) "<<endl;
    cin>>info.HasRecommendation;
    return info;
} 

bool IsAccepted(stInfo info){
    if(info.HasRecommendation){
        return true;
    }
else
{
return(info.age>21 && info.HasDrivingLicense );

}
};


void PrintInfo(stInfo info){
    if(IsAccepted)
    cout<<"\n Hired"<<endl;
    else
    cout<<"\n Rejected"<<endl;

}

int main(){
    PrintInfo(ReadInfo());

    return 0;
}