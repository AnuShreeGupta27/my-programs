// There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.//
#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
    vector<int> Rearrange(vector<int> &A){
        int n=A.size();
        vector<int> ans(n,0);
        int posindex=0;
        int negindex=1;

        for(int i=0; i<n; i++){
            if(A[i]>0){
                ans[posindex]=A[i];
                posindex+=2;
            }
            else{
                ans[negindex]=A[i];
                negindex+=2;
            }

        }
        return ans;
    }
};

int main(){
    Solution s;
    vector <int> A={-3,9,8,-6,5,-7};
    
    vector<int> result = s.Rearrange(A);

    for(int num:result){
        cout<<num<<" ";
    }
    return 0;
}