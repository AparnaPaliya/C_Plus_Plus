#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"enter the two binary number: ";
    cin>>num1;
    cin>>num2;
    int dec1=0;
    int dec2=0;
    int power = 1;
    while(num1>0){
        int unit_digit=num1%10;
        dec1+=power*unit_digit;
        num1/=10;
        power*=2;
    }
    power=1;
    while(num2>0){
        int unit_digit=num2%10;
        dec2+=power*unit_digit;
        num2/=10;
        power*=2;
    }
    if(dec1>dec2){
        cout<<"the greatest number is : "<<dec1;
    }else{
        cout<<"the greater number is : "<<dec2;
    }
}