#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
    public:
    vector <int> nextpermutation(vector<int> &arr){
        int n= arr.size();
        int index = -1;

        for(int i= n-2; i>=0; i--){
            if(arr[i] < arr[i+1]){
                index= i;
                break;
            }
        }

        if(index==-1){
            reverse(arr.begin(), arr.end());
            return arr;
        }

        for(int i=n-1; i> index; i--){
            if(arr[i]>arr[index]){
                swap(arr[i],arr[index]);
                break;
            }
        }

        reverse(arr.begin()+index +1, arr.end());

        return arr;

    }   
        
    
};

int main(){
    Solution s;
    vector <int> arr ={2,6,3,1,5};
    vector <int> res= s.nextpermutation(arr);

    for(int ans:res){
        cout<<ans<<" ";
    }
    return 0;
}