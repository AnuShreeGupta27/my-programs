//Check if a pair with given sum exists in Array//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
    public:
    string sumtarget(const vector<int> arr, int target ){
        int n= arr.size();
        vector<pair<int,int>> numsindex;
        for(int i=0;i<n;i++){
            numsindex.push_back({arr[i],i});
        
        }
        sort(numsindex.begin(), numsindex.end());

        int left=0, right=n-1;
        while(left<right){
            int sum= numsindex[left].first +numsindex[right].first;
            if (sum==target){
                return "YES";
            }
            else if(sum<target){
                left++;
            }
            else{
                right--;
            }
        }
        return "NO";
    }

    vector<int> index(const vector<int> arr, int target){ int n= arr.size();
        vector<pair<int,int>> numsindex;
        for(int i=0;i<n;i++){
            numsindex.push_back({arr[i],i});
        
        }
        sort(numsindex.begin(), numsindex.end());

        int left=0, right=n-1;
        while(left<right){
            int sum= numsindex[left].first +numsindex[right].first;
            if (sum==target){
                return {numsindex[left].second,numsindex[right].second};
            }
            else if(sum<target){
                left++;
            }
            else{
                right--;
            }
        }
        return {-1,1};
    

    }
};
int main(){
    Solution p;
    vector<int> arr={2,6,9,3,5};
    int target = 12;

    cout<<p.sumtarget(arr,target)<<"\n";
    vector<int> res= p.index(arr,target);
    cout<<"[" <<res[0] <<"," << res[1]<<"]"<<"\n";

}