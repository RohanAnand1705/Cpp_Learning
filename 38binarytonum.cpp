#include <iostream>
#include <cmath>   
using namespace std;

int main() {
    cout << "Enter number: ";
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;

    while (n != 0) {
        int digit = n % 10;
        ans = ans + digit * pow(2, i); 
        n = n / 10;
        i++;
    }

    cout << ans;
}