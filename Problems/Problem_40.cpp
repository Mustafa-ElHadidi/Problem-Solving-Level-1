#include<iostream>
using namespace std;
//Service Fee and Sales Tax...

float ReadPositiveNumbers(string Message){
    float num;
    do{
        cout<<Message<<endl;
        cin>>num;
    }while (num<=0);
return num;  
}

float TotalBill_After_Service_And_Tax(float totalbill){
    totalbill=totalbill*1.1;
    totalbill=totalbill*1.16;
    return totalbill;
}

int main(){

    float totalbill=ReadPositiveNumbers("Please Enter Total Bill");
    cout<<endl;
    cout<<"Total Bill: "<<totalbill<<endl;
    cout<<"Total Bill After Tax and Service is: "<<TotalBill_After_Service_And_Tax(totalbill);
    return 0;
}