#include<iostream>
using namespace std;
//Print NUmbers from 1 to N

int ReadNumber(){
    int num;
    cout<<"Enter your Number"<<endl;
    cout<<"---------------------"<<endl;
    cin>>num;
    return num;
}

void Print_Range_Uinge_While(int N){
    int counter =0;
    while(counter<N){
        counter++;
        cout<<counter<<endl;
    
    }
}

void Print_Range_Uinge_DO_While(int n){
    int c=0;
    do{
         c++;
        cout<<c<<endl;
    }
    while(c<n);
}


void Print_Range_Uinge_For_Loop(int n){
    for(int c=1; c<=n; c++){
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