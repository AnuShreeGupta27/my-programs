#include <iostream>
using namespace std;
class lrotate{
    public:
    lrotate(int arr[], int n){
        int carr[n];
        for(int i=0; i<n-1; i++){
            carr[i]=arr[i+1];
            
        }
        carr[n-1]= arr[0];
        for(int i=0; i<n; i++){
            cout<<carr[i]<<" ";
        }

    }
};

int main(){
    int arr[5]={2,3,4,5,6};
    lrotate l(arr, 5);
}