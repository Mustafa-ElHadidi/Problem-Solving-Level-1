#include<iostream>
#include<string>
#include<cmath>
using namespace std;
//Rectangl Area BY Diagonal & Side 

void ReadNumbers(float &A,float &B){
    cout<<"enter your side "<<endl;
    cin>>A;
    cout<<"Enter your diagonal"<<endl;
    cin>>B;
}

float CalculateArea(float x, float y){
    return x*(sqrt(pow(y,2)-pow(x,2)));
}
void PrintResult(float Area){
    cout<<"Your Area of Rectangle is "<<Area;
}

int main(){
    float x,y;
    ReadNumbers(x,y);
    PrintResult(CalculateArea(x,y));
    return 0;
}