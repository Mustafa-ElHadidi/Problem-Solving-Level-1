/*
#include<iostream>
using namespace std;

void ReadNumbers (int& mark1, int& mark2, int& mark3){
    cout<<"please enter your mark 1: "<<endl;
    cin>>mark1;
     cout<<"please enter your mark 2: "<<endl;
     cin>>mark2;
      cout<<"please enter your mark 3: "<<endl;
      cin>>mark3;
}

int SumOf3Marks(int mark1, int mark2, int mark3){
    return mark1+mark2+mark3;
}

float CalculateAverage(int mark1,int  mark2 ,int  mark3 ){
    return float(SumOf3Marks(mark1,mark2 ,mark3))/3;
}

bool Ispassed(int mark1,int mark2,int mark3){
    
    return(CalculateAverage(mark1,mark2,mark3)>=50);

};


void PrintResult(float total,int mark1,int mark2, int mark3)
{
   cout<<"\n the Average  of your marks is: "<<total<<endl;
   if(Ispassed(mark1,mark2,mark3))
   cout<<"you are passed "<<endl;
   else
   cout<<"you are failed "<<endl;

}

int main(){
    int mark1, mark2, mark3;
    ReadNumbers(mark1, mark2, mark3);
    
    PrintResult(CalculateAverage(mark1, mark2, mark3),mark1,mark2,mark3);
   
    return 0;

}*/

#include<iostream>
using namespace std;
enum enPassFail{pass=1,fail=2};

void ReadNumbers (int& mark1, int& mark2, int& mark3){
    cout<<"please enter your mark 1: "<<endl;
    cin>>mark1;
     cout<<"please enter your mark 2: "<<endl;
     cin>>mark2;
      cout<<"please enter your mark 3: "<<endl;
      cin>>mark3;
}

int SumOf3Marks(int mark1, int mark2, int mark3){
    return mark1+mark2+mark3;
}

float CalculateAverage(int mark1,int  mark2 ,int  mark3 ){
    return float(SumOf3Marks(mark1,mark2 ,mark3))/3;
}

enPassFail CheckAverage(float Average){
    if(Average>=50)
    return enPassFail::pass;
    else
    return enPassFail::fail;

}

void PrintResult(float Average){
    cout<<"your Average is "<<Average<<endl;
    if(CheckAverage(Average)==::pass)
    cout<<"U are passed"<<endl;
    else
    cout<<"U are failed "<<endl;
}


int main(){
    int num1,num2,num3,Average;
    ReadNumbers(num1,num2,num3);
    PrintResult(CalculateAverage(num1,num2,num3)  );

    return 0;
}
