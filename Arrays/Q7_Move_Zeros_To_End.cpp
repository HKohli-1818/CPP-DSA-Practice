/* Q7: Move all zeros to end */

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> arr;
    for(int i=0;i<N;i++){
        int d;
        cin>>d;
        arr.push_back(d);
    }
    int pos = 0;
    for(int i=0;i<N;i++){
        if(arr[i]!=0){
            arr[pos]=arr[i];
            pos++;
        }
    }
    for(int i=pos;i<N;i++){
        arr[i]=0;
    }
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}