#include <iostream>
using namespace std;
class Search{
    public:
    Search(int arr[], int n, int x){
        
        for(int i=0; i<n; i++){
            if(arr[i]==x){
                cout<<x<<" found at "<<i<<endl;
            }
        }
    }
};
int main(){
    int arr[8]={2,4,6,9,8,3,6,7};
    Search s(arr, 8, 4);
    Search p(arr, 8, 6);
}