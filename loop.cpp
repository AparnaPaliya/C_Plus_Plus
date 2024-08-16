#include<iostream>
using namespace std;

int main(){
    int i=1;
    int index;
    int idx=15;
    while(i<=10){
        cout<<i<<" ";
        i=i+1;
    }
    for(int index=0;index<5;index++){
    cout<<index<<" ";
}
do{
    cout<<idx<<" ";
    idx=idx+1;
}
while(idx<=16);
do{
    cout<<idx<<" ";
}while(idx<5);
}  

