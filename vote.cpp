#include<iostream>
using namespace std;
bool vote(int age)
{
    if(age>=18){
        return true;
    }
    return false;
}
int main()
{
    cout<<"enter the age : ";
    int age;
    cin>>age;
    if(vote(age)==true)
    {
        cout<<"yes";

    }else{
        cout<<"no";
    }
}