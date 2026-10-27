#include<iostream>
using namespace std;
#include<cmath>

struct strTaskDuration{
    int days, hours, secondes, minutes;
};

int Read_Positive_Number(string message){
    int number;
    do{
        cout<<message<<endl;
        cin>>number;
    }
    while(number<=0);

    return number;
}

strTaskDuration SecondsTOTaskDuration(int totalSeconds){
    strTaskDuration Taskduration;
    const int seconds_per_day=24*60*60;
    const int seconds_per_hour=60*60;
    const int seconds_per_minute=60;

    int Remainder=0;
    Taskduration.days=floor(totalSeconds/seconds_per_day);
    Remainder=totalSeconds%seconds_per_day;

    Taskduration.hours=floor(Remainder/seconds_per_hour);
    Remainder=Remainder%seconds_per_hour;

    Taskduration.minutes=floor(Remainder/seconds_per_minute);
    Remainder=Remainder%seconds_per_minute;
    Taskduration.secondes=Remainder;


     return Taskduration;

}

void PrintTask( strTaskDuration TaskDuration){
    cout<<endl;
    cout<<TaskDuration.days<<":"<<TaskDuration.hours<<":"<<TaskDuration.minutes<<":"<<TaskDuration.secondes<<endl;
    
}
int main(){

     int totalSecondes=Read_Positive_Number("Please Enter Total Secondes ");
    PrintTask(SecondsTOTaskDuration(totalSecondes));
    return 0;

}