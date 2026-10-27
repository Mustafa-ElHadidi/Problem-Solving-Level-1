#include<iostream>
using namespace std;
enum enNUMBERTYPE{odd=1,even=2};
int read_number(){
    int number;
    cout<<"enter your number "<<endl;
    cin>>number;
    return number;
}

enNUMBERTYPE check_number_type(int number){
    int result=number%2;
    if(result==0)
    return enNUMBERTYPE::even;
    else
    return enNUMBERTYPE::odd;

}
void print_number(enNUMBERTYPE numbertype){
    if(numbertype==enNUMBERTYPE::even)
    cout<<"\n Number is even"<<endl;
    else
    cout<<"Number is odd"<<endl;
}

int main(){

print_number(check_number_type(read_number()));

}