/* Q4: Linear search in array */

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
    int target;
    cin>>target;
    for(int i=0;i<N;i++){
        if(arr[i]==target){
            cout<<"Found\n";
            return 0;
        }
    }
    cout<<"Not Found\n";
    return 0;
}