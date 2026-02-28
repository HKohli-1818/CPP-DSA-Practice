/* Q6: Reverse array */

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
    int i=0, j=N-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}