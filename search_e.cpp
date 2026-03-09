#include <iostream>
using namespace std;
class search{
    public:
    search(int arr[], int n, int x){
        int carr[n];
        for(int i=0; i<n; i++){
            if(arr[i]==x){
                cout<<x<<" found at "<<i<<endl;
            }
        }
    }
};
int main(){
    int arr[8]={2,4,6,9,8,3,6,7};
    search s(arr, 8, 4);
    search p(arr, 8, 6);
}