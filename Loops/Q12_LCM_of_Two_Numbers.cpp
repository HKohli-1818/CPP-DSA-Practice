/* Q12: Find LCM of two numbers */

#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cin>>num1>>num2;
    int a=num1;
    int b=num2;
    if(b>a){
        swap(a,b);
    }
    while(b!=0){
        int rem = a%b;
        a = b;
        b = rem;
    }
    int GCD = a;
    int LCM = (num1*num2)/GCD;
    cout<<LCM<<endl;
    return 0;
}