#include <iostream>
using namespace std;
class lrotatek{
    public:
    lrotatek(int arr[], int n, int k){
        int carr[n];
        for(int i=0; i<k; i++){
            carr[n-k+i]=arr[i];


        }
        for(int i=0; i<n-k; i++){
            carr[i]=arr[k+i];
        }
        for (int i=0; i<n; i++){
            cout<<carr[i]<<" ";
        }
    }

};
int main(){
   int arr[7]={1,2,3,4,5,6,7};
   lrotatek l(arr,7,3);
}