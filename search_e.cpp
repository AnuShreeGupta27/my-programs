#include <iostream>
using namespace std;
class search{
    public:
    search(int arr[], int n){
        int carr[n];
        for(int i=0; i<n; i++){
            if(arr[i]==3){
                cout<<"3 found at "<<i;
            }
        }
    }
};
int main(){
    int arr[8]={2,4,6,9,8,3,1,7};
    search s(arr, 8);
}