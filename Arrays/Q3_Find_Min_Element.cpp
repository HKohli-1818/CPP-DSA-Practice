/* Q3: Find minimum element in array */

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
    int minimum = arr[0];
    for(int i=1;i<N;i++){
        if(minimum>arr[i]){
            minimum=arr[i];
        }
    }
    cout<<minimum<<endl;
    return 0;
}