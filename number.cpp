#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"enter the first number ";
    cin>>x;
    cout<<"enter the second number ";
    cin>>y;
    cout<<(x==y) ? 1:0;
    cout<<((x<50) && (x<y))?1:0;
    return 0;
}