/* Q12: Simple Calculator */

#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    char op;
    cin>>num1>>op>>num2;
    if(op=='+'){
        cout<<num1+num2<<endl;
    }else if(op=='-'){
        cout<<num1-num2<<endl;
    }else if(op=='*'){
        cout<<num1*num2<<endl;
    }else if(op=='/'){
        if(num2!=0){
            cout<<num1/num2<<endl;
        }else{
            cout<<"Division by zero ain't possible";
        }
    }
    return 0;
}