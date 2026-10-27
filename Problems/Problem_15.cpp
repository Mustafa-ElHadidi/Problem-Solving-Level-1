#include<iostream>
using namespace std;
//Rectangle Area...
void ReadNumbers(float &A , float &B){
    cout<<"Enter your Length of Rectangle"<<endl;
    cin>>A;
    cout<<"Enter your Width of Rectangle "<<endl;
    cin>>B;    
}
float CalculateArea(float a,float b ){

    float Area=a*b;
    return Area;
}
void PrintResult(float Area){
    cout<<"The Area of your Rectangle is: "<<Area<<endl;
}


int main(){
    float x,y;
    ReadNumbers(x,y);
    PrintResult(CalculateArea(x,y));
return 0;
}