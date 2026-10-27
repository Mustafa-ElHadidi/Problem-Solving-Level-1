#include<iostream>
using namespace std;

//Print Letters from A to Z.. 

void Print_Letters(){
    for(int i=65; i<=90; i++) {
        cout<<char(i)<<endl;
    } 
}
int main(){
    Print_Letters();
    return 0;
}