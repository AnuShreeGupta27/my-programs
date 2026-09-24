//Given two integers r and c, return the value at the rth row and cth column (1-indexed) in a Pascal's Triangle.//
#include <iostream>
#include <vector>
 
using namespace std;

class Solution{
    public:
    int pacaltriangle(int r, int c){
        vector<vector<int>> triangle;
        for(int i=0;i<r; i++){

            vector<int> row(i+1, 1);

            for(int j=1; j<i; j++){

                row[j]=triangle[i-1][j-1]+triangle[i-1][j];
            }

            triangle.push_back (row);


        }
        return triangle[r-1][c-1];
    }
};

int main(){
    Solution s;
    int r=4;
    int c=3;
    cout<<s.pacaltriangle(r,c);
}