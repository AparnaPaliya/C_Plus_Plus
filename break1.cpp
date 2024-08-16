#include<iostream>
using namespace std;

int main(){
    int i ,j;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cout<<j<<" ";
        }
        cout<<'\n';
    }
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cout<<j<<" ";
            if(i==j) break;
        }
        cout<<'\n';
    }
    int index=0, val=0;
    while(1){
        cout<<val<<" ";
        val+=2;
        index+=1;
        if(index==10)break;
    }
    for(int i=1;i<=5;i++){
        if(i==3)continue;
        cout<<i<<" ";
    }
}