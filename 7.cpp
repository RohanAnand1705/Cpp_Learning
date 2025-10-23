#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << ch << " is a lowercase alphabet." << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " is an uppercase alphabet." << endl;
    }
    else if (ch <= '9' && ch >= '0')
    {
        cout << ch << " is numeric." << endl;
    }
    else
    {
        cout << ch << " is a special character." << endl;
    }
}