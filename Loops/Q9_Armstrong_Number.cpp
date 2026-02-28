/* Q9: Check Armstrong number */

/*A number is Armstrong if:

Sum of cube of digits = original number*/

#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int Num =N;
    int sum = 0;
    while(Num!=0){
        int temp;
        temp = Num%10;
        sum+=temp*temp*temp;
        Num=Num/10;
    }
    if(sum==N){
        cout<<"Armstrong\n";
    }else{
        cout<<"Not Armstrong\n";
    }
    return 0;
}