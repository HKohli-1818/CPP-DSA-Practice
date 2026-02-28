/* Q10: Vowel or Consonant */

#include <iostream>
using namespace std;

int main(){
    char alpha;
    cin>>alpha;

    if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u' ||
       alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U'){
        cout<<"Vowel\n";
    }else{
        cout<<"Consonant\n";
    }

    return 0;
}