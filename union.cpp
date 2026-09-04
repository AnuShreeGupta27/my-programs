#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Union{
    public:
    vector<int> findUnion(int arr[], int arr1[], int n, int m){
        map<int, int> freq;
        vector<int> Union;

        for(int i=0; i<n; i++){
            freq[arr[i]]++;
        }

        for(int i=0; i<m; i++){
            freq[arr1[i]]++;
        }

        for(auto &it :freq){
            Union.push_back(it.first);
        }
        return Union;
    }

};

int main(){
    int n=5; int m= 6;
    int arr[]= {2,6,7,9,4};
    int arr1[]= {7,8,9,6,3,4};

    Union p;
    vector<int> Union= p.findUnion(arr, arr1, n, m);
    cout<< "UNION of arr and arr1 is:" <<endl;

    for(auto &val :Union)
    cout<<val <<" ";
    return 0;
}