#include<iostream>
#include<cmath>
using namespace std;

float ReadSquareSide(){
    float a;
    cout<<"Enter Square Side: "<<endl;
    cin>>a;
    return a*a;
}
float CalculatArea(float Area){
        const float pi=3.14159265;
        return (Area*pi)/4;
}
void PrintArea(float A){
    cout<<"Circle Area is "<<A<<endl;
} 
int main(){
    PrintArea(CalculatArea(ReadSquareSide()));
    return 0;
}