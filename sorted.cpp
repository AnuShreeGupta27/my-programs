#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of elements: ";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    bool sorted =true;

    for(int i = 1; i<n; i++){
        if(arr[i]< arr[i-1]){
            sorted = false;
            break;
        }
    
        
    }


    if(sorted)
    cout<<"array is sorted";
    else
    cout<<"array is not sorted";



}