#include<iostream>
using namespace std;
//print the sum of first n natural numbers 

int main(){

    int n;
    cin>>n;

    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<sum<<endl;

    return 0;
}