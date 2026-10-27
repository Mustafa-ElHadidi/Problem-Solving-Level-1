#include<iostream>
using namespace std;
//Grade
int Read_Number_Range(int from, int to){
    int grade;
    do{
        cout<<"Please enter your Grade betwenn 0 and 100 "<<endl;
        cin>>grade;
    }
    while(grade<from && grade>to);
    return grade;
}

char Get_Grade_Letter(int grade){
    if(grade>=90)
    return 'A';
    else if(grade>=80)
    return 'B';
    else if(grade>=70)
    return 'C';
    else if(grade>=60)
    return'D';
    else if(grade>=50)
   return'E';
    else
    return'F';
}



int main(){
    
    cout<<endl<<"Result: "<<Get_Grade_Letter(Read_Number_Range(0,100));


    return 0;
}