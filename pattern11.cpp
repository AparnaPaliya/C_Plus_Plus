#include<iostream>
using namespace std;

int main(){

    int row,col;
    cout<<"enter no of rows"<<endl;
    cin>>row;
    cout<<"enter no of columns"<<endl;
    cin>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}