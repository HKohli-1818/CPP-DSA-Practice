/* Q7: Reverse a number */

#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int temp = num;
    int rev=0;
    while(temp!=0){
        int d=temp%10;
        rev=rev*10+d;
        temp=temp/10;
    }
    cout<<rev<<endl;
    return 0;
}