//Buy at the lowest price seen so far, and sell at a later higher price to get the maximum profit.//
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution{
    public:
    int stockbuysell(vector <int> &arr){
        int minprice =INT_MAX;
        int maxprofit =0;
        
        for(int price: arr){
            if(price < minprice){
                minprice = price;

            }

            else{
                maxprofit=max(maxprofit, price-minprice);
            }
        }
        return maxprofit;
    }
};

int main(){
    Solution s;
    vector<int> arr={2,6,8,4,3};
    cout<< s.stockbuysell(arr)<<endl;

}