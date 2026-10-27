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
   
    if(number %2 ==0)
    return enumOddorEven::even;
    else
    return enumOddorEven::odd;

}

void PrintSumEven_Using_FOr(int n){
    int sum=0;

    for(int counter=1; counter<=n; counter++){

       if(CheckOddOREvn(counter)==enumOddorEven::even){
        sum+=counter;
       }
    }
   cout<<"Sum of Even Numbers is: "<<sum;
   cout<<endl;
}

void PrintSumEven_Using_While(int n){
    int sum=0;
    int counter=0;
    while(counter<n){
        counter++;
        if(CheckOddOREvn(counter)==::enumOddorEven::even){
            sum+=counter; 
        }
    }
    cout<<"Sum of Even Numbers is: "<<sum<<endl;
}


void PrintSumEven_Using_Do_While(int n){
     int sum=0;
    int counter=0;
    do{
        counter++;
        if(CheckOddOREvn(counter)==::enumOddorEven::even){
            sum+=counter; 
        }

    }
    while(counter<n);
        cout<<"Sum of Even Numbers is: "<<sum;
}
int main(){

    PrintSumEven_Using_FOr(ReadNumber());
     PrintSumEven_Using_While(ReadNumber());
     PrintSumEven_Using_Do_While(ReadNumber());
   
    return 0;
}