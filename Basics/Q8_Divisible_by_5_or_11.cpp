/* Q8: Divisible by 5 or 11 */

#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    if(num%11==0 || num%5==0){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
    return 0;
}