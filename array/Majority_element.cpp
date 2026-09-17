//Find the Majority Element that occurs more than N/2 times//

#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    int majority(vector<int> &arr){
        int el;
        int cnt=0;
        int n=arr.size();
        for(int i=0; i<arr.size(); i++){
            if(cnt==0){
                el=arr[i];
                cnt=1;
            }

            else if(arr[i]==el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==el){
                cnt1++;
            }
        }

        if(cnt1>(n/2)){
            return el;
        }
        return -1;
    }
};

int main(){
    Solution s;
    vector<int> arr={2,3,3,4,6,3,3};
    int res= s.majority(arr);
    cout<<"majority element is: "<<res;
}