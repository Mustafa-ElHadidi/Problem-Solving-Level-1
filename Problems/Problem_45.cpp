#include<iostream>
using namespace std;

enum enMonth{jun=1, feb=2, mars=3, april=4, may=5, june=6, july=7 , aug=8, sep=9, oct=10, nov=11, dec=12 };

int ReadNumberInRange(string message, int from, int to){
    int num=0;
    do{
        cout<<message<<endl;
        cin>>num;
    }while(num<from || num>to );
    return num;
}

enMonth ReadMonth(){
    return(enMonth)ReadNumberInRange("please enter day number of Week from 1 : 12 ",1 , 12);
}

string GetMonth(enMonth Month){
    switch (Month)
    {
    case enMonth::jun:
    return"Junuary";
        break;

        case enMonth::feb:
        return"February";
        break;

        case enMonth::mars:
        return"Mars";
        break;

        case enMonth::april:
        return"April";
        break;

        case enMonth::may:
        return"May";
        break;

        case enMonth::june:
        return"June";
        break;

        case enMonth::july:
        return"July";
        break;

        case enMonth::aug:
        return"August";
        break;

        case enMonth::sep:
        return"Septembre";
        break;

        case enMonth::oct:
        return"October";
        break;

        case enMonth::nov:
        return"November";
        break;

        case enMonth::dec:
        return"December";
        break;

        default:
        return"error";
    }
}

int main(){

    cout<<GetMonth(ReadMonth())<<endl;


}