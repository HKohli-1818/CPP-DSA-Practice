/* Q10: Find two numbers whose sum = target (unsorted array) */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr;
    unordered_map<int, int> mp;

    for (int i = 0; i < N; i++) {
        int d;
        cin>>d;
        arr.push_back(d);
        mp[d]++;
    }
    int target;
    cin >> target;
    for (int i = 0; i < N; i++) {
        int x = arr[i];
        int y = target - x;

        if (mp[x] > 0 && mp[y] > 0) {
            if(x==y){
                if(mp[x]>1){
                    cout << x << "," << y << endl;
            mp[x]--;
            mp[y]--;
                }
            }else{
                cout << x << "," << y << endl;
                mp[x]--;
                mp[y]--;
            }
        }
    }
    return 0;
}