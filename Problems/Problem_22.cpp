#include<iostream>
#include<cmath>
using namespace std;
void ReadTriangle( float& a, float &b){
    cout<<"Enter the Trinagle side A: "<<endl;
    cin>>a;
    cout<<"Enter the Trinagle Base B: "<<endl;
    cin>>b;
}

float CalculateArea(float a,float b){
    float Area;
    const float pi=3.14159265;
    Area=(pi*pow(b,2)/4)*((2*a-b)/(2*a+b));
    return Area;
}

void PrintArea(float A){
    cout<<"Circle Arae is "<<A<<endl;
}
int main(){
    float a,b;
    ReadTriangle(a,b);
    PrintArea(CalculateArea(a,b));

    return 0;
}