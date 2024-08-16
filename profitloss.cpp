#include<iostream>
using namespace std;

int main(){
    int CP,SP,amt;
    cout<<"enter the cost price: ";
    cin>>CP;
    cout<<"enter the selling price: ";
    cin>>SP;
    if(SP>CP){
        amt=SP-CP;
        cout<<"profit = "<<amt;
    }
    else if(CP>SP){
        amt=CP-SP;
        cout<<"loss = "<<amt;
    }
    else{
        cout<<"no profit no loss ";
    }
    return 0;
}