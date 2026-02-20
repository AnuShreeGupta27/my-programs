#include <iostream>
using namespace std;
int main(){
    int n;
    int num;
    int reverse =0;
    cout<<"enter a number";
    cin>> num;

    
    while(num>0){
        n=num%10;
        
        reverse=(reverse*10)+n;
        num= num/10;
    }
    cout<<"reverse number:"<<reverse;
}