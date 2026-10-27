#include<iostream>
using namespace std;

//Task Duration in Seconds

struct stTaskDuration{
    int days, hours, minutes, secondes;
};

int  Read_Positive_Numbers(string message){
    int number=0;
    do{
        cout<<message<<endl;
        cin>>number;
    }while(number<=0);

}

stTaskDuration ReadTaskDuration(){
    stTaskDuration taskDuration;
    taskDuration.days=Read_Positive_Numbers("please Enter Days: ");
    taskDuration.hours=Read_Positive_Numbers("please Enter hours: ");
    taskDuration.minutes=Read_Positive_Numbers("please Enter minutes: ");
    taskDuration.secondes=Read_Positive_Numbers("please Enter secondes: ");

    return taskDuration;
}

int taskduration(stTaskDuration taskduration){
    int durationInSecondes=0;
    durationInSecondes=taskduration.days*24*60*60;
    durationInSecondes+=taskduration.hours*60*60;
    durationInSecondes+=taskduration.minutes*60;
    durationInSecondes+=taskduration.secondes;
    
    return durationInSecondes;
}
int main(){

    cout<<"\n Task Duration IN Seconds: "<<taskduration(ReadTaskDuration());

    return 0;
}