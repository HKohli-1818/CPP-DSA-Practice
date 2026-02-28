/* Q6: Number Sign and Even Odd */

#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    if(num>0){
        if(num%2==0){
            cout<<"Positive Even\n";
        }else{
            cout<<"Positive Odd\n";
        }
    }else if(num<0){
        if(num%2==0){
            cout<<"Negative Even\n";
        }else{
            cout<<"Negative Odd\n";
        }
    }else{
        cout<<"Zero\n";
    }
    return 0;
}