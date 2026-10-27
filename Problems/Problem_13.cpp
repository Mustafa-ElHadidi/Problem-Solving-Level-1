#include<iostream>
using namespace std;
void Readnumbers (int &num1,int &num2,int &num3)
{
    cout<<"enter Number 1: "<<endl;
    cin>>num1;
    cout<<"enter number 2: "<<endl;
    cin>>num2;
    cout<<"enter your number 3: "<<endl;
    cin>>num3;
}

int MaxOf2Numbrs(int num1, int num2,int num3){
if (num1>num2){
    if (num1>num3){
        return num1;
    }

else
return num2;
}

if (num2>num3)
return num2;
else
return num3;

}

void PrintResult(int max){
    
cout<<"the Max number is "<<max;
}


int main(){
    int num1,num2,num3;
    Readnumbers(num1,num2,num3);
    PrintResult(MaxOf2Numbrs(num1,num2,num3));
return 0;
}
