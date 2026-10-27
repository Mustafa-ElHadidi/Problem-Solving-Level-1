#include<iostream>
using namespace std;
//Print NUmbers from N to 1

int ReadNumber(){
    int num;
    cout<<"Enter your Number"<<endl;
    cout<<"---------------------"<<endl;
    cin>>num;
    return num;
}

void Print_Range_Uinge_While(int N){
    int counter =N;
    while(counter>=1){
        cout<<counter<<endl;
        counter--;
    
    }
}

void Print_Range_Uinge_DO_While(int n){
    int c=n;
    do{
        cout<<c<<endl;
        c--;
    }
    while(c>=1);
}


void Print_Range_Uinge_For_Loop(int n){
    for(int c=n; c>=1; c--){
        cout<<c<<endl;
    } 
}

int main(){
    Print_Range_Uinge_While(ReadNumber());
    cout<<endl;
    Print_Range_Uinge_DO_While(ReadNumber());
    cout<<endl;
    Print_Range_Uinge_For_Loop(ReadNumber());
    return 0;
}