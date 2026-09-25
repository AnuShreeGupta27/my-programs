#include <iostream>
#include <vector>

using namespace std;
class Solution{
    public:
    void elements(int n){
        long long ans=1;

        for(int i=1; i<=n; i++){
            cout<<ans<<" ";
            ans= ans*(n-i)/i;
        }
    }
};
int main(){
    Solution s;
    s.elements(5);
}