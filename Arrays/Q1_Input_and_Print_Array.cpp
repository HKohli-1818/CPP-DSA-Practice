/* Q1: Input and Print Array */

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin>>N;
    int arr[100];

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    for(int i=0;i<N;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}