#include<iostream>
using namespace std;
//Print Sum of Odd Numbers ....
enum enumOddorEven{odd=1, even=2};

int ReadNumber(){
    int N;
     cout<<"Enter a Number: "<<endl;
    cin>>N;
    return N;
}

enumOddorEven CheckOddOREvn(int number){
   
    if(number %2  !=0)
    return enumOddorEven::odd;
    else
    return enumOddorEven::even;

}

void PrintSumOdd_Using_FOr(int n){
    int sum=0;

    for(int counter=1; counter<=n; counter++){

       if(CheckOddOREvn(counter)==enumOddorEven::odd){
        sum+=counter;
       }
    }
   cout<<"Sum of Even Numbers is: "<<sum;
   cout<<endl;
}

void PrintSumOdd_Using_While(int n){
    int sum=0;
    int counter=0;
    while(counter<n){
        counter++;
        if(CheckOddOREvn(counter)==::enumOddorEven::odd){
            sum+=counter; 
        }
    }
    cout<<"Sum of Even Numbers is: "<<sum<<endl;
}


void PrintSumOdd_Using_Do_While(int n){
     int sum=0;
    int counter=0;
    do{
        counter++;
        if(CheckOddOREvn(counter)==::enumOddorEven::odd){
            sum+=counter; 
        }

    }
    while(counter<n);
        cout<<"Sum of Even Numbers is: "<<sum;
}
int main(){

    PrintSumOdd_Using_FOr(ReadNumber());
     PrintSumOdd_Using_While(ReadNumber());
     PrintSumOdd_Using_Do_While(ReadNumber());
   
    return 0;
}