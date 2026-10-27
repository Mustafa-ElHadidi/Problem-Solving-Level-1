#include<iostream>
using namespace std;

int Read_Monthes_Money(){
    int money ,paid;
    do{
        cout<<"Enter Loan Amount "<<endl;
        cin>>money;
        cout<<"Enter Money you can paid in month "<<endl;
        cin>>paid;
    }
    while(money<=0 && paid<=0);
    
    int totalPaid=money/paid;
    return totalPaid;
}

void print_result(int totalpaid){
    cout<<"Total Monthes to pay money is : "<<totalpaid;
}
int main(){
    
    print_result(Read_Monthes_Money());
    return 0;

}