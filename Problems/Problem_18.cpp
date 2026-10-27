#include<iostream>
#include<cmath>
using namespace std;

float ReadRadious(){
    float r;
    cout<<"enter your Radious: "<<endl;
    cin>>r;
    return r;
}

float CalculateArea(float R){
    const float pi=3.14159265;
    float Area=pow(R,2)*pi;
    return Area;
}

void PrintArea(float A){
    cout<<"The Area of Circle is: "<<A<<endl;
}

int main(){
    
PrintArea(CalculateArea(ReadRadious()));
    return 0;
}