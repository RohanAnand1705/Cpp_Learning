#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum = 0;
    int mult = 1;
    while(n!=0){
        int digit = n%10;
        sum += digit;
        mult *= digit;
        n = n/10;
    }
    int result = mult - sum;
    cout<<"The result is: "<<result<<endl;
}