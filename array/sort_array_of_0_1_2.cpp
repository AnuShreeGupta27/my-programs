// Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order. The sorting must be done in-place, without making a copy of the original array.//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
    public:
    void sorting(vector<int> &arr){
        int low=0, mid=0, high=arr.size()-1;

        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[mid],arr[low]);
                low++;
                mid++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[mid],arr[high]);
                high--;
            }
        
        }
    }
};
int main(){
    vector<int> arr={0,1,0,2,0,2,1};
    Solution s;
    s.sorting(arr);

    for(int value:arr){
        cout<<value<<" ";
    }


    
}
