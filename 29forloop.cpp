#include <iostream>
using namespace std;
int main() {
    int i = 1;
    for (; ; ) {
        if(i<=10){
        cout << i << endl;}
        else{
            break;
        }
        i++;
    }
    for (int a = 10 , b = 10; a>=0 && b>=0; a--, b--) {
        cout << a << " " << b << endl;
    }
}