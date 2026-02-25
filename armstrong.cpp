#include<iostream>
using namespace std;
int main(){
    int num;
    int n;
    int sum=0;
    int a= num;
    cout<<"enter number:";
    cin>> num;

    while(num>0){
    n= num%10;
    sum= sum+(n*n*n);
    num=num/10;
    }


    if(sum==a){
        cout<<"number is armstrong";
    }
    else{
        cout<<"not armstrong number";
    }




}