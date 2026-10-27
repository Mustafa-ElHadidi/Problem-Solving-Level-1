#include<iostream>
using namespace std;

int Read_Monthes_Money(){
    int money ,monthes;
    do{
        cout<<"Enter Loan Amount "<<endl;
        cin>>money;
        cout<<"Enter Monthes Installment "<<endl;
        cin>>monthes;
    }
    while(money<=0 && monthes<=0);
    
    int totalMonthes=money/monthes;
    return totalMonthes;
}

void print_result(int totlamonth){
    cout<<"Total to Pay in month: "<<totlamonth;
}
int main(){
    
    print_result(Read_Monthes_Money());
    return 0;

}