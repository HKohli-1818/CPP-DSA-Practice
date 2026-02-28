/* Q5: Count even and odd elements in array */

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> arr;
    int even=0, odd=0;
    for(int i=0;i<N;i++){
        int d;
        cin>>d;
        arr.push_back(d);
        if(d%2==0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    return 0;
}