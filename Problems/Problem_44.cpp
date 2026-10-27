#include<iostream>
using namespace std;

enum enDay{ sat=1, sun=2, mon=3, tue=4, wed=5, thu=6, fri=7};

int ReadNumberInRange(string message, int from, int to){
    int num=0;
    do{
        cout<<message<<endl;
        cin>>num;
    }while(num<from || num>to );
    return num;
}

enDay ReadDayOFWeek(){
    return(enDay)ReadNumberInRange("please enter day number of Week from 1 : 7 ",1 , 7);
}

string GetDay(enDay Day){
    switch (Day)
    {
    case enDay::sat:
    return"Saturday";
        break;

        case enDay::sun:
        return"Sunday";
        break;

        case enDay::mon:
        return"Monday";
        break;

        case enDay::tue:
        return"Tuesday";
        break;

        case enDay::wed:
        return"Wedbesday";
        break;

        case enDay::thu:
        return"Thursday";
        break;

        case enDay::fri:
        return"Friday";
        break;

        default:
        return"error";
    }
}

int main(){

    cout<<GetDay(ReadDayOFWeek())<<endl;


}