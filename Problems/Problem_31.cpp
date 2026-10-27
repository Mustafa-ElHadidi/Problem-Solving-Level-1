#include<iostream>
using namespace std;
//Power of 2 , 3 , 4

int Read_Numbers(){
    int N;
    cout<<"enter A number: "<<endl;
    cin>>N;
    cout<<"The Powers 2_3_4 of Your Number is "<<endl;
    return N;
}

void Print_Pow_2_3_4(int number){
    int a,b,c;
    a=number*number;
    b=number*number*number;
    c=number*number*number*number;
    cout<<a<<" "<<b<<" "<<c<<" "<<endl;
}

int main(){
    Print_Pow_2_3_4(Read_Numbers());


}