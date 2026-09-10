#include <iostream>
#include <vector>
using namespace std;
class solution{
    public:
    int appear(vector<int> &arr){
        int n=arr.size();
        int a=0;

        for(int i=0; i<n; i++){
            a=a^arr[i];
        }

        return a;
    }

};

int main(){
    solution p;
    vector<int> arr={2,2,3,6,3};
    int ans=p.appear(arr);
    cout<<"single appearance of number: "<<ans;
    return 0;
}