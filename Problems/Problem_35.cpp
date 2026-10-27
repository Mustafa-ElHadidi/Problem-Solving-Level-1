#include<iostream>
using namespace std;
//Piggy Bank Calculator.....

struct stPiggyBankContenet{
    int pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContenet Read(){
    stPiggyBankContenet PiggyBank;
    cout<<"Pleade enter your total pennies? "<<endl;
    cin>>PiggyBank.pennies;
    cout<<"Pleade enter your total Nickles? "<<endl;
    cin>>PiggyBank.Nickels;
    cout<<"Please enter your total Dimes? "<<endl;
    cin>>PiggyBank.Dimes;
    cout<<"Pleade enter your total Quartes? "<<endl;
    cin>>PiggyBank.Quarters;
    cout<<"Pleade enter your total Dollars? "<<endl;
    cin>>PiggyBank.Dollars;

    return PiggyBank;
}

int CalculateTotal(stPiggyBankContenet piggyBank){
    int TotalPennies=0;
    TotalPennies=piggyBank.pennies+ piggyBank.Nickels*5 + piggyBank.Dimes*10 + piggyBank. Quarters*25 + piggyBank.Dollars*100;
    return TotalPennies;
}


int main(){
    int totalpennies=CalculateTotal(Read());

    cout<<endl<<"Total Pennies = "<<totalpennies<<endl;
    cout<<endl<<"Total Dollars = "<< (float)totalpennies /100 <<endl;
    
    return 0;
}