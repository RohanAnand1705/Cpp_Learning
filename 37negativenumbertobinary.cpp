#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n != 0){
        n%2 == 0 ? cout << 0 : cout << 1;
        n = n / 2;
        
       
    }
}