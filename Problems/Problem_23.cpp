#include<iostream>
#include<cmath>
using namespace std;
//Circle Area Describted Around an Arbitrary Triangle........
void ReadSides(float &a, float &b, float &c){
    cout<<"Enter side A :"<<endl;
    cin>>a;
        cout<<"Enter side B :"<<endl;
cin>>b;
            cout<<"Enter side C :"<<endl;
cin>>c;
}

float CalculateArea(float a,float b,float c){
   float P=(a+b+c)/2;
   float T=(a*b*c)/(4*sqrt(P*(P-a)*(P-b)*(P-c)));
   const float pi=3.14159265;
   float Area=pi*pow(T,2);
   return Area;
}

void PrintArea(float A){
    cout<<"Circle Area is "<<A<<endl;
}


int main(){
    float x,y,z;
    ReadSides(x,y,z);
    PrintArea(CalculateArea(x,y,z));

    return 0;
}