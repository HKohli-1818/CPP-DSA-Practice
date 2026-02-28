/*Take an integer as input and determine whether it is Positive, Negative, or Zero.*/

#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    if(num>0){
        cout<<"Positive\n";
    }else if(num<0){
        cout<<"Negative\n";
    }else{
        cout<<"Zero\n";
    }
    return 0;
}