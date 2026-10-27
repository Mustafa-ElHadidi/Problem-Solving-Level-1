#include<iostream>
using namespace std;

float ReadHours(string Message){
    int hours;
    do{
    cout<<Message<<endl;
    cin>>hours;}
    while(hours<=0);
    return hours;
}

float CalculateDays(float NumberOfHours){
    return float(NumberOfHours)/24;

}

float CalculateWeeks(float NumberOfHours){
    return float(NumberOfHours)/(24*7);
}

float DaysToWeeks(float NumberOFDays){
    return float(NumberOFDays)/7;
}


int main(){
    float NumberOfHours=ReadHours("Pleas enter Hours ");
    float NumberOfDays=CalculateDays(NumberOfHours);
    float NumberOfWeeks=DaysToWeeks(NumberOfDays);

    cout<<endl;
    cout<<"Total Hours: "<<NumberOfHours<<endl;
    cout<<"Total Days: "<<NumberOfDays<<endl;
    cout<<"Total Weeks: "<<NumberOfWeeks<<endl;

    return 0;
}