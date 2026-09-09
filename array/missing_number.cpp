#include <iostream>
#include <vector>
using namespace std;

class missing{
    public:
    int findmissing(vector<int> &arr){
        int n= arr.size()+1;
        
        int sum=0;

        for(int i=0; i<arr.size(); i++){
            sum+=arr[i];
        }

        long long actualSum=(n*(n+1))/2;

        return actualSum-sum;


    }

};

int main(){
missing p;
//p.findmissing();
vector<int> arr={1,2,3,4,6};
cout<<"missing number: "<< p.findmissing(arr);

}