/* Q2: Find maximum element in array */

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
    int maximum = arr[0];
    for(int i=1;i<N;i++){
        if(maximum<arr[i]){
            maximum=arr[i];
        }
    }
    cout<<maximum<<endl;
    return 0;
}