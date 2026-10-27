#include<iostream>
using namespace std;
//Factorial of N!

int Read_Positive_Number(string Message){
    int N;
    do{
    cout<<Message<<endl;
    cin>>N;
} while(N<0);

return N;
}

void Factorial(int number){
    int F=1;
    for(int counter=number+1; counter>1; ){
        counter--;
        F=F*counter;
    }
    cout<< F;
}


int main(){

    Factorial(Read_Positive_Number("Enter Number?"));

}