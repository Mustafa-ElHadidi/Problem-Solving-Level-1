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
    int counter=3;
    do{
        counter--;
        Pincode=ReadPinCode();
        if(Pincode=="1234"){
        return 1;
    }
        else{
            system("color 4F");
            cout<<"\n Wrong PIN, U have: "<<counter<<" more tries"<<endl;
        }
    }
    while(counter>=1 && Pincode!="1234");

    return false; //return 0;
}

int main(){
    if (Login()){
        system("color 2F");
    cout<<"\n Your account Balance is: "<<7500<<endl;
    }

    else{
        cout<<"\nYour card blocked , call the Bank for help\n";
    }


    return 0;
}