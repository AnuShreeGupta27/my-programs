#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of elements";
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    //int INT_MIN;
    int max= 0;//INT_MIN;
    int second_largest= 0;//INT_MIN;

    for (int i=0;i<n; i++){
        if (arr[i]>  max){
            second_largest = max;
            max = arr[i];
        }
        else if (arr[i]> second_largest && arr[i] != max){
            second_largest = arr[i];
        }
    }
    cout<< "Largest = "<< max <<endl;
 
    if (second_largest == 0)  //IF ALL THE ELEMENTS ARE SAME
    cout<< "No second largest element";
    else{
        cout<<"Second largest = "<< second_largest << endl;
    }


}