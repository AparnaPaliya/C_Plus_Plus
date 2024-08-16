#include<iostream>
using namespace std;

int main(){
    int n,first,second,third,fourth,fifth,sum,sum1;
    n=12345;
    first=n/10000;
    n=n%10000;
    second=n/1000;
    n=n%1000;
    third=n/100;
    n=n%100;
    fourth=n/10;
    fifth=n%10;
    sum=first+fourth;
    sum1=first+second+third;
    cout<<"sum of first and fourth digit is: " << sum<<endl;
    cout<<"sum of 3 digits is: "<< sum1<<endl;
    return 0;
}
