#include<iostream>
using namespace std;
int  ReadAge(){
    int age;
    cout<<"please Enter your Age Between 18 and 45 "<<endl;
    cin>>age;
    return age;
}

bool Validate_Number_INRange(int age,int from, int to){
    return(age>=from && age<= to);
}

int Read_Age_Between(int from, int to){
    int Age;
    do{
        Age=ReadAge();
    }
    while(!Validate_Number_INRange(Age,from,to));
    
    return Age;
}

void PrintResult(int age){
    if(Validate_Number_INRange)
    cout<<"Valid Age and your Age is "<<age<<endl;
}
int main(){
    PrintResult(Read_Age_Between(18,45));
    return 0;
}