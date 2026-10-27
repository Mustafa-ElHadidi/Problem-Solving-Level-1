#include<iostream>
using namespace std;
void ReadNumbers(float &A, float &B){
    cout<<"enter your hight of Trinagle "<<endl;
    cin>>A;
    cout<<"enter your Base "<<endl;
    cin>>B;
}

float CalculateArea(float x, float y){
    return 0.5*x*y;
}

void PrintResult(float Area){
    cout<<"\nThe Area of Trinagle is: "<<Area;


} 

int main(){
    float z,c;
    ReadNumbers(z,c);
    PrintResult(CalculateArea(z,c));

}
