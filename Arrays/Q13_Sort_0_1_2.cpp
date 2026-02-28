/* Q13: Sort array of 0s, 1s, and 2s */
// DUTCH NATIONAL FLAG

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> arr;
    for(int i=0;i<N;i++){
        int d; cin>>d;
        arr.push_back(d);
    }
    int low=0, mid=0, high=N-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }else if(arr[mid]==1){
            mid++;
        }else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}