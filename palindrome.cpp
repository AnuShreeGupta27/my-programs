#include<iostream>
using namespace std;
int main(){
     int num;
    
    int n;
    int reverse =0;
    cin>> num;
    int a= num;

    while(num>0){
        n=num%10;
        reverse=(reverse*10)+n;
        num=num/10;
    }
     if(a==reverse){

    
        cout<<"number is palindrome";
    }
    else{
        cout<<"no";
    }
}
