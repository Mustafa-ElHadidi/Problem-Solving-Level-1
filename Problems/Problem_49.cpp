#include<iostream>
using namespace std;

string ReadPinCode(){
    string Pincode;
    cout<<"Please enter your code: "<<endl;
    cin>>Pincode;
    return Pincode;
}

bool Login(){
    string Pincode;
    do{
        Pincode=ReadPinCode();
        if(Pincode=="1234")
        return 1;
        else{
            cout<<"\n Wrong PIN\n";
            system("color 4F");
        }
    }
    while(Pincode!="1234");
}

int main(){
    if (Login()){
        system("color 2F");
    cout<<"\n Your account Balance is: "<<7500<<endl;


    return 0;
}}