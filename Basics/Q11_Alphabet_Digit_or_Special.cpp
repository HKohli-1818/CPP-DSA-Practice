/* Q11: Alphabet, Digit or Special Character */

#include <iostream>
using namespace std;

// using ASCII code

int main(){
    char input;
    cin>>input;
    if((input>=65 && input<=90) || (input>=97 && input<=122)){
        cout<<"Alphabet\n";
    }else if(input>=48 && input<=57){
        cout<<"Digit\n";
    }else{
        cout<<"Special Character\n";
    }
    return 0;
}