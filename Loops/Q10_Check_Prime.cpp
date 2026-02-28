/* Q10: Check Prime Number */

#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    if(num<=1){
        cout<<"Not Prime\n";
        return 0;
    }

    for(int i=2;i<num;i++){
        if(num%i==0){
            cout<<"Not Prime\n";
            return 0;
        }
    }
    cout<<"Prime\n";
    return 0;
}