/* Q10: Find two numbers whose sum = target (sorted array) */

/* Find all pairs whose sum = target (sorted array) */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int left = 0, right = N - 1;

    while(left < right){
        int sum = arr[left] + arr[right];

        if(sum == target){
            cout << arr[left] << " " << arr[right] << endl;
            left++;
            right--;
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }

    return 0;
}