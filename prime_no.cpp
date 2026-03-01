#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number";
    cin>>num;
    int divisors=0;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            divisors++;

        }
    }
    if (divisors==2){
        cout<<"prime number";
    }
    else{
        cout<<"not a prime number";

    }
}