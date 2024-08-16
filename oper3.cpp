#include<iostream>
using namespace std;

int main(){

    int p=15 , q=10 , r=5;
    cout<<((p>q) && (p>r))<<endl;
    cout<<((p>q) && (p<r))<<endl;

    cout<<((r<p) || (p<q))<<endl;
    cout<<((p>q) || (q>r))<<endl;
    cout<<((p<q) || (p<r))<<endl;

    cout<<(!(p==q))<<endl;
    cout<<(!(p>q))<<endl;
    return 0;
}


    