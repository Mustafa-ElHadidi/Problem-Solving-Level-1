#include<iostream>
using namespace std;
//Sum untill -99

float ReadNumber(string Message){
    float num;
    cout<<Message<<endl;
    cin>>num;
    return num;
}

float SumNumbers(){
    int sum=0, number=0, counter=1;
    do{
        number=ReadNumber("please enter Number "+to_string(counter));
        if(number==-99){
            break;
        }
        sum+=number;
        counter++;
    }
    while(number!=-99);

    return sum;
}

int main(){
    cout<<endl<<"Result: "<<SumNumbers()<<"\n";
    return 0;
}