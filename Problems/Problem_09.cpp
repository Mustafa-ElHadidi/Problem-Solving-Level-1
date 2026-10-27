#include<iostream>
using namespace std;

void ReadNumbers (int& num1, int& num2, int& num3){
    cout<<"please enter your number 1: "<<endl;
    cin>>num1;
     cout<<"please enter your number 2: "<<endl;
     cin>>num2;
      cout<<"please enter your number 3: "<<endl;
      cin>>num3;
}

int SumOf3Numbers(int num1, int num2, int num3){
    return num1+num2+num3;
}

void PrintResult(int total){
   cout<<"\n the Total sum of numbers is: "<<total<<endl;
}
int main(){
    int num1, num2, num3;
    ReadNumbers(num1, num2, num3);
    
    PrintResult(SumOf3Numbers(num1, num2, num3));


}