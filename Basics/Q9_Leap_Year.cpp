/* Q9: Leap Year */

#include <iostream>
using namespace std;

int main(){
    // for an year to be leap year it should be a multiple of 400 or multiple of only 4 and not 100
    int year;
    cin>>year;
    if(year%400==0 || (year%4==0 && year%100!=0)){
        cout<<"Leap Year!\n";
    }else{
        cout<<"Not a Leap Year\n";
    }
    return 0;
}