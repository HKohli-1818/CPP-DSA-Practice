/* Q6: Count number of digits in a number */

#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    if(num==0){
        cout<<1;
        return 0;
    }
    int count = 0;
    while(num!=0){
        count++;
        num=num/10;
    }
    cout<<count<<endl;
    return 0;
}