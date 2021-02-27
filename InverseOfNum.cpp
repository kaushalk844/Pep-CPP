#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int counter = 1;
    int ans = 0;
    while (n != 0)
    {
        int rem = n % 10;
        n /= 10;

        ans += counter * pow(10,rem - 1);
        counter++;
    }
    cout<<"Inverse of the given number is : "<<ans<<endl;    
}