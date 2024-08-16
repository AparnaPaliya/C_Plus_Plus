#include<iostream>
using namespace std;
//print all the values b/w 1 and 50 except for the multiple of 3

int main(){
     
    for(int i=1;i<=50;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}
