#include <iostream>
using namespace std;
class remove0{
    public:
    remove0(int arr[], int n){
        int carr[n];
        int j=0;
        for (int i=0; i<n; i++){
            if(arr[i]!=0){
                carr[j]=arr[i];
                j++;
            }
            
        }        while(j<n){
            carr[j]=0;
            j++;
        }
        for (int i=0; i<n; i++){
                cout<<carr[i]<<" ";
            }
        

    }
};
int main(){
    int arr[9]={ 1,0,3,0,2,0,0,5,6};
    remove0 p(arr,9);
}