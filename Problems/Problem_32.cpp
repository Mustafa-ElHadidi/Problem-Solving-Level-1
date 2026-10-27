#include<iostream>
using namespace std;

int ReadNumber(){
    int num;
    cout<<"Enter your Number? "<<endl;
    cin>>num;
    return num;
}

int ReadPower(){
    int pow;
    cout<<"enter your power "<<endl;
    cin>>pow;
    return pow;
}

void PrintResult(int number, int power){
    int p=1;
    if(power==0){
        cout<<p;
    }
    else{
        for(int counter=1; counter<=power; counter++){
            p=p*number;
        }
    }
    cout<<p;

}

int main(){
    PrintResult(ReadPower(),ReadNumber());
    //الكومبيلر بيقرأ من اليمين
    
    
}