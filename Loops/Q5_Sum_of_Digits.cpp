/* Q5: Find sum of digits of a number */

#include <iostream>
using namespace std;

int main(){
    int Num;
    cin>>Num;
    int sum = 0;
    while(Num!=0){
        int temp;
        temp = Num%10;
        sum+=temp;
        Num=Num/10;
    }
    cout<<sum<<endl;
    return 0;
}