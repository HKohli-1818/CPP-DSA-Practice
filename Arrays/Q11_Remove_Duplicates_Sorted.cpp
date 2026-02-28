/* Q11: Remove duplicates from sorted array */

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
    int pos=1;
    for(int i=1;i<N;i++){
        if(arr[i]!=arr[i-1]){
            arr[pos]=arr[i];
            pos++;
        }
    }
    arr.resize(pos);
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}