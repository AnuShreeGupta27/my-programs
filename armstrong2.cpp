#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num;
    cout<<"enter a number";
    cin>>num;
    int a=num;
    int n;
    int p=0;
    int sum=0;


    while(num>0){
        num=num/10;
        p++;
    }
    num=a;
    while(num>0){
        n=num%10;
        sum+=pow(n,p);
        num= num/10;
    }
    if(sum==a){
        cout<<"armstrong number";
    }
    else{
        cout<<"not armstrong number";
    }
}