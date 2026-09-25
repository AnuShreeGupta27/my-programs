#include <iostream>
#include <vector>

using namespace std;
class Solution{
    public:
    vector<vector<int>> generate(int n){
        vector<vector<int>> triangle;
       
        for(int i=1; i<=n; i++){
            vector<int> current;
            long  long ans=1;
            current.push_back(ans);

            for(int j=1; j<i; j++){
                ans= ans*(i-j)/j;
                current.push_back(ans);
            }
            triangle.push_back(current);
        }
        return triangle;
    }
};



int main(){
    Solution s;
    vector<vector<int>>Triangle=  s.generate(6);

    for(int i=0; i< Triangle.size(); i++){

        
        for(int j=0; j<Triangle[i].size(); j++){
            cout<<Triangle[i][j]<<" ";

        }
        cout<<endl;
    }
    return 0;

}