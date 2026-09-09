#include <iostream>
using namespace std;

class consecutive{
    public:
    int maxconsecutive(int arr[], int n){
        int count=0;
        int maxcount=0;

        for(int i=0; i<n; i++){
            if(arr[i]==1){
                count++;
                

            }
            else{
                count=0;
            }
            maxcount= max(count,maxcount);
        }
        return maxcount;
    }
};

int main(){
    int arr[]={1,1,0,1,1,1};
    int n=6;

    consecutive p;
    cout<<"max consecutive ones are: "<<p.maxconsecutive(arr,  n);
}


/*with vector<int>
#include <iostream>
#include <vector>
using namespace std;

class cons{
    public:
    int maxconse(vector<int> &arr){

    int cnt=0;
    int maxc=0;

    for(int i=0; i<arr.size(); i++){
        if(arr[i]==1){
            cnt++;
        }
        else{
            cnt=0;
        }
        maxc= max(maxc, cnt);
    
    }
    return maxc;

    }

};

int main(){
    vector<int> arr={1,1,0,1,1,1};
    //int n=6;

    cons p;
    cout<<"max consecutive ones are: "<<p.maxconse(arr);
}
    */
