#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter the number : ";
    cin>>num;
    int count=0;
        while(num>0){
        int parity = num % 2;
        if(parity==0){
            count++;
        }
        
        num/=2;
    }
    cout<<"the number of zeros is : "<<count<<endl;
    return 0;
}