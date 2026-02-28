/* Q8: Move all zeros to beginning */

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
    int pos=N-1;
    for(int i=N-1;i>=0;i--){
        if(arr[i]!=0){
            arr[pos]=arr[i];
            pos--;
        }
    }
    for(int i=pos;i>=0;i--){
        arr[i]=0;
    }
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}