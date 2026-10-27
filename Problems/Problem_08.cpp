#include<iostream>
using namespace std;
enum enPassFail{pass=1,fail=2};
int Readmark(){
    int mark;
    cout<<"please enter your mark "<<endl;
    cin>>mark;
    return mark;
}
enPassFail checkMark(int mark){
    if (mark>=50)
    return enPassFail::pass;
    else
    return enPassFail::fail;
}

void PrintResult(int mark){

    if(checkMark(mark)==enPassFail::pass)
    cout<<"\n you passed "<<endl;
    else
    cout<<"\n you Failed\n";
}

int main(){

    PrintResult(Readmark());
    return 0;

}