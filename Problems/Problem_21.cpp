#include<iostream>
#include<cmath>
using namespace std;
//Circle Area Along the Circumference
float ReadCircumference(){
    float L;
    cout<<"Enter Circumference"<<endl;
    cin>>L;
    return L;
} 

float CalculateArea(float l){
const float pi=3.14159265;
float A;
A=pow(l,2)/(pi*4);
    return A;
}

void PrintArea(float C){
    cout<<"Circle Area is: "<<C<<endl;
}

int main(){
    PrintArea(CalculateArea(ReadCircumference()));
    return 0;
}