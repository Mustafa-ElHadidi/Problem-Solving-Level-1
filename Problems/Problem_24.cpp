
#include<iostream>
using namespace std;
struct stinfo{
    int age;
};
stinfo Readinfo(){
    stinfo info;
    cout<<"enter your Age "<<endl;
    cin>>info.age;
    return info;
}

bool isaccepted(stinfo info){
    return(info.age>=18 && info.age<=45);
}

void PrintResult(stinfo info){
if(isaccepted(info))
    cout<<"Valid"<<endl;
    else
    cout<<"InValid"<<endl;
}

int main(){
    PrintResult(Readinfo());

    return 0;
}
/*
//Another Solutons.......
#include<iostream>
using namespace std;
int  ReadAge(){
    int age;
    cout<<"please Enter your Age: "<<endl;
    cin>>age;
    return age;
}

bool Validate_Number_INRange(int number,int from, int to){
    return(number>=from && number<= to);
}

void PrintResult(int age){
    if(Validate_Number_INRange(age,18,45))
    cout<<"Valid Age"<<endl;
    else
        cout<<"InValid Age"<<"\n";
    
}
int main(){
    PrintResult(ReadAge());
}*/
