#include <iostream>
#include <vector>
#include <map>
using namespace std;

class subarray{
    public:
    int maxlength(vector<int> &arr, int k){
        int sum=0;
        int n= arr.size();
        int maxlen=0;
        map<int,int> presum;

        for(int i=0; i<n; i++){
            sum+=arr[i];

            if(sum==k){
                maxlen= max(maxlen, i+1);
            }
            
            int a= sum-k;
            if (presum.find(a)!= presum.end()){
                int len = i -presum[a];
                maxlen= max(maxlen, len);
            }

            if(presum.find(sum)==presum.end()){
                presum[sum]=i;
            }
        }

        return maxlen;

    }
};

int main(){
    subarray p;
    vector<int> arr={6,2,5,1,9};
    int k= 8;
    
    int ans = p.maxlength(arr,k);
    cout<<"the length of longest subarray is: "<<ans;
}