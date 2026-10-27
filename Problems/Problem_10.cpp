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

void PrintResult(float total){
   cout<<"\n the Average  of your marks is: "<<total<<endl;
}
int main(){
    int mark1, mark2, mark3;
    ReadNumbers(mark1, mark2, mark3);
    
    PrintResult(CalculateAverage(mark1, mark2, mark3));
    return 0;


}