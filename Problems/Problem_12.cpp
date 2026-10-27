#include<iostream>
using namespace std;
void Readnumbers (int &num1,int &num2)
{
    cout<<"enter Number 1: "<<endl;
    cin>>num1;
    cout<<"enter number 2: "<<endl;
    cin>>num2;
}

int MaxOf2Numbrs(int num1, int num2){
if (num1>num2)
return num1;

else
return num2;

}

void PrintResult(int max){
    
cout<<"the Max number is "<<max;
}


int main(){
    int num1,num2;
    Readnumbers(num1,num2);
    PrintResult(MaxOf2Numbrs(num1,num2));
return 0;
}