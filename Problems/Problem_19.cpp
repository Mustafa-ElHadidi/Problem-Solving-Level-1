#include<iostream>
using namespace std;
#include<cmath>
float ReadDiameter(){
    float d;
    cout<<"enter your Diameter of the Circle: "<<endl;
    cin>>d;
    return d;
}

float CalculateArea(float d){
    const float pi=3.14159265;
    return (pi*pow(d,2))/4;
}

void PrintResult(float Area){
    cout<<"The Area of Circle is "<<Area;
}

int main(){
    PrintResult(CalculateArea(ReadDiameter()));
    
    return 0;
}