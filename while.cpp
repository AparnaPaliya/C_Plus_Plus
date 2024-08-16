#include<iostream>
using namespace std;
//print the sum of first n natural numbers 

int main(){

    int n;
    cin>>n;

    int sum=0;

    int i=1; //loop variable
    while(i<=n){ //condition
         sum+=i;
         i++; //updating loop variable
    }

    cout<<sum<<endl;

    return 0;

}