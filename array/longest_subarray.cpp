//Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.//

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class solution{
    public:
    int subaraay(vector<int> &arr, int k){
        int n=arr.size();
        int maxlen=0;
        int sum =arr[0];
        int i=0, j =0;

        while(j<n){

            while(i<=j && sum>k ){
                sum-=arr[i];
                i++;
            }
            

            if(sum==k){
                maxlen= max(maxlen, j-i+1);
            }

            j++;
            if(j <n){
                sum+= arr[j];
            }
            
        }
        return maxlen;
    }
};

int main(){
    solution p;
    vector<int> arr={6,5,3,2,2,7};
    int k =12;
    int ans= p.subaraay(arr,k);
    cout<<"max length of array that sum k: "<<ans;
}