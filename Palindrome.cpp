#include <iostream>
using namespace std;

int main()
{
    int n, num, digit, rev=0; 
    cout<<"Enter a number to check palindrome : "<<endl;
    cin>>num;
    n=num;

    while(num != 0)
    {
        digit = num % 10;
        rev = (rev*10) + digit;
        num = num / 10;
    }
    if(n == rev)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not a Plaindrome";
    }

    return 0;
}