#include<iostream>
using namespace std;

float ReadPositiveNumbers(string Message){
    float num;
    do{
        cout<<Message<<endl;
        cin>>num;
    }
    while(num<=0);
    return num;
}

float CalculatRemainder(float totalBill, float TotalCashPaid){
    return TotalCashPaid-totalBill;
}


int main(){

    float totlabill=ReadPositiveNumbers("Please enter TotalBill? ");
    float totalcashpaid=ReadPositiveNumbers("Please enter totalcashpaid");

    cout<<endl;
    cout<<"Remainder = "<<CalculatRemainder(totlabill,totalcashpaid);
    return 0;
}