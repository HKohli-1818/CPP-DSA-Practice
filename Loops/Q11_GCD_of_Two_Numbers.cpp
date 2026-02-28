/* Q11: Find GCD of two numbers */

#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cin>>num1>>num2;
    if(num2>num1){
        swap(num1,num2);
    }
    while(num2!=0){
        int rem = num1%num2;
        num1 = num2;
        num2 = rem;
    }
    cout<<num1<<endl;
    return 0;
}