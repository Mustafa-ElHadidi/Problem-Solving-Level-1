#include<iostream>
using namespace std;
int Readnumber(){
    int num;
    cout<<"enter a number "<<endl;
    cin>>num;
    return num;
}

float CalculateHalfNumber(int num){
    return float(num)/2;
}

void PrintResult(int num){

    string Result="Half of "+to_string(num)+" is "+ to_string(CalculateHalfNumber(num));
    cout<<endl<<Result<<endl;
}
int main(){

    PrintResult(Readnumber());

}