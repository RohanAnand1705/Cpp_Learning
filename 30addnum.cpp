#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout<<"The sum of first "<<n<<" natural numbers is: "<<sum<<endl;
     int a = 0;
     int b = 1;
     for(int i=1;i<=n;i++){
         int next = a + b;
            cout<<next<<" ";
         a = b;
         b = next;
     }
}