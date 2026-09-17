//Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.
//

#include <iostream>
#include <vector>
#include <climits>//we include climits for LLONG_MIN//
using namespace std;
class Solution{
    public:
    int maxsum(vector<int> &arr){
        long long maxi= LLONG_MIN;

        long long sum=0;
        for(int i=0; i<arr.size(); i++){

            sum+=arr[i];

            if(sum>maxi){
             maxi=sum;
            }
            
            if(sum<0){
             sum=0;
            }
        }
        return maxi;
    }

};

int main(){
    Solution s;
    vector<int> arr={3,-2,6,-4,1,5};
    int res=s.maxsum(arr);
    cout<<"Maximum subarray sum is: "<<res<<endl;
    return 0;
}