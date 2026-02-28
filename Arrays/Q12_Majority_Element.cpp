/* Q12: Find majority element */
// Majority element = element appearing more than N/2 times



#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> arr;
    unordered_map<int,int> mp;

    for(int i = 0; i < N; i++){
        int d;
        cin >> d;
        arr.push_back(d);
        mp[d]++;
    }

    for(auto pair : mp){
        if(pair.second > N/2){
            cout << pair.first << endl;
            return 0;
        }
    }

    cout << "No majority element" << endl;

    return 0;
}