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
            if(k==1){
                cout<<(row-i+2);
            }
            else{
                cout<<" ";
            }
            for(int m=k;m>=1;m--){
                if(m==1){
                    cout<<(row-i+2);
                }
                else{
                    cout<<" ";
                }
                cout<<"\n";
            }
            return 0;
        }
    }
}