#include<iostream>
using namespace std;
//Comission
int Read_Total_Sales(){
    int totlasales;
    cout<<"Enter your Total Sales: "<<endl;
    cin>>totlasales;
    return totlasales;
}

float Calculate_Comission_Percentage(float totalsales){
    if(totalsales>=1000000)
    return 0.01;

    else if(totalsales>=500000)
    return 0.02;

    else if(totalsales>=100000)
    return 0.03;

    else if(totalsales>=50000)
    return 0.05;

    else
    return 0; 
}

float Calculate_Comission(float totalsales){
    return Calculate_Comission_Percentage(totalsales)*totalsales;
}

int main(){
float totalsales=Read_Total_Sales();
cout<<endl<<"Comission Percentage = "<<Calculate_Comission_Percentage(totalsales)<<endl;
cout<<endl<<"Total Comission = "<<Calculate_Comission(totalsales)<<endl;


}