#include<iostream>
using namespace std;

int main(){

    int row,i,j,k,m;
    cout<<"enter no of rows = "<<endl;
    cin>>row;
    for(i=row+1;i>1;i--){
        for(j=i;j>2;j--){
            cout<<" ";
        }
        for(k=1;k<=(row-i+1);k++){
            cout<<k;
        }
        for(int m =k;m>=1;m--){
            cout<<m;
        }
        cout<<"\n";
    }
    return 0;
}