#include<iostream>
using namespace std;
//Simple Calculator..........
enum enOperationType{Add='+', subtract='-' , Multiply='*' , Divide='/' };
float ReadNumber(string Message){
    cout<<Message<<endl;
    int num;
    cin>>num;
    return num;
}

enOperationType ReadOpType(){
    char OT;
    cout<<"Please enter Operation Type(+, -, /, *)"<<endl;
    cin>>OT;
    return enOperationType(OT); //Data Casting.... 
}

float Calculate(float num1, float num2, enOperationType optype){
    switch(optype){
    case enOperationType::Add:
    return num1+num2;

    case enOperationType::subtract:
    return num1-num2;

    case enOperationType::Divide:
    if(num2==0){
    cout<<"Math Error"<<endl;
}

    return num1/num2;

    case enOperationType::Multiply:
    return num1*num2;

    default:
     cout<<"Error";
}
}


int main(){
    float num1=ReadNumber("Please enter the frist number?");
    float num2=ReadNumber("Please enter the second number?");

    enOperationType optype=ReadOpType();
    cout<<endl<<"Result: "<<Calculate(num1,num2,optype);



}