#include <iostream>
#include <vector>

using namespace std;
class Solution{
    public:

    vector<int> spiralorder(vector<vector<int>> &matrix){

        if(matrix.empty()|| matrix[0].empty()){
            return {};
        }

        vector<int> order;
        int top =0;
        int bottom= matrix.size()-1;
        int left = 0;
        int right= matrix[0].size()-1;

        while(top<= bottom && left<= right){

            for(int a= left; a<= right; a++){
                order.push_back(matrix[top][a]);
            }
            top++;

            for(int b=top; b<=bottom; b++){
                order.push_back(matrix[b][right]);
            }
            right--;

            if(top<=bottom){
                for(int a=right; a>=left; a--){
                    order.push_back(matrix[bottom][a]);
                }
                
                bottom--;

            }

            if(left<=right){
                for(int b= bottom; b>=top; b--){
                    order.push_back(matrix[b][left]);
                }

                left++;
            }
        }

        return order;

    }
};

void printvector(vector<int> &values){
    cout<<"[";

    for(int i=0; i<values.size(); i++){
        if(i>0){
            cout<<",";
        }
        cout<<values[i];
    }

    cout<<"]\n";
}

int main(){
    vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    Solution s;
    vector<int> res= s.spiralorder(matrix);
    printvector(res);
}