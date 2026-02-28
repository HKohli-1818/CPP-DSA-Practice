/* Q9: Remove all occurrences of X from array */

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
    int X;
    cin>>X;
    int pos=0;
    for(int i=0;i<N;i++){
        if(arr[i]!=X){
            arr[pos]=arr[i];
            pos++;
        }
    }
    arr.resize(pos);
    for(int z : arr){
        cout<<z<<" ";
    }
    return 0;
}