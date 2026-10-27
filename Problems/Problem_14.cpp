#include<iostream>>
using namespace std;

void ReadNumbers(int &num1,int &num2){
    cout<<"enter yiur number 1: "<<endl;
    cin>>num1;
    cout<<"enter your numbe 2: "<<endl;
    cin>>num2;
}

void Swap(int &A, int&B){

    int temp;
    temp=A;
    A=B;
} 

void PrintNumbers(int  num1,int num2){
    cout<<"your number 1 is : "<<num1;
    cout<<endl;
    cout<<"your number 2 is: "<<num2<<endl;;

}
int main(){
    int num1,num2;
    ReadNumbers(num1,num2);
    PrintNumbers(num1,num2);
    swap(num1,num2);
    cout<<"After Swapping "<<endl;
        PrintNumbers(num1,num2);

    return 0;
}