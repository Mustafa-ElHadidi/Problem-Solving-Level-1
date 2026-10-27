#include<iostream>
#include<cmath>
using namespace std;

enum enPrime{prime=1, NotPrime=2};

float ReadPositiveNumber(string message){
    int number=0;
    do{
        cout<<message<<endl;
        cin>>number;
    }
    while (number<=0);
    return number;
}


enPrime CheckPrime(int num){

    int M=round(num/2);  // round للتقريب
    for(int counter=2; counter<=M; counter++){
        if(num%counter==0)
            return enPrime::NotPrime;
    
    }
    return enPrime::prime;
}

void PrintNumberType(int number){
    switch (CheckPrime(number))
    {
    case enPrime::prime:
    cout<<"\nThe Number is prime"<<endl;
        break;

    default:
    cout<<"\nThe Number is Not prime"<<endl;
    }
}

int main(){

    PrintNumberType(ReadPositiveNumber("please enter a Number"));
}