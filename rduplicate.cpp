#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of elements";
    cin>> n;
    int arr[n];
    

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    

    for(int i=0; i<n; i++){
        int j;
        for(j= i+1; j<n; j++){
            if(arr[j]==arr[i]){
                break;
            }
            
        }

        if( j ==n){
            cout<<arr[i]<<" ";
        }
       
    }

}