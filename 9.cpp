#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    int sum = 0;
    while(i <= n){
        sum = sum + i;
        i = i + 1;}
    cout<< "Sum of numbers: " << sum <<endl;
    int j = 0;
    int add = 0;
    while(j <= n){
        add = add + j;
        j = j + 2;}
    cout<< "Sum of Even: " << add;
}