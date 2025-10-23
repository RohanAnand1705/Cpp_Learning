#include <iostream>
using namespace std;
int main()
{
    unsigned int a = 112;
    cout << a << endl;

    float b = 2.0 / 5;
    cout << b << endl;

    bool first = (a == b);
    cout << first << endl;
    bool second = (a > b);
    cout << second << endl;
    bool third = (a < b);
    cout << third << endl;
    bool fourth = (a >= b);
    cout << fourth << endl;
    bool fifth = (a <= b);
    cout << fifth << endl;
    bool sixth = (a != b);
    cout << sixth << endl;
}