/* Q12: Majority Element using Boyer-Moore Voting Algorithm */

/* Q12: Majority Element (Boyer-Moore Voting) */

#include <iostream>
#include <vector>
using namespace std;

int main(){

    int N;
    cin >> N;

    vector<int> arr(N);

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    int candidate = 0;
    int count = 0;

    // Phase 1: find candidate
    for(int i = 0; i < N; i++){

        if(count == 0){
            candidate = arr[i];
        }

        if(arr[i] == candidate){
            count++;
        }
        else{
            count--;
        }
    }

    // Phase 2: verify
    count = 0;

    for(int i = 0; i < N; i++){
        if(arr[i] == candidate){
            count++;
        }
    }

    if(count > N/2){
        cout << candidate << endl;
    }
    else{
        cout << "No majority element" << endl;
    }

    return 0;
}