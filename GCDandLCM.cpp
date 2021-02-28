#include<iostream>
using namespace std;
int main()
{
    int num1 , num2;
    cin>>num1>>num2;
    int divd = num1;
    int divs = num2;
    //code for GCD
    while(divd % divs != 0)
    {
        int rem = divd % divs;
        divd = divs;
        divs = rem;
    }
    cout<<divs<<endl;

    //code for LCM
    int lcm;
    lcm = (num1 * num2) / divs;
    cout<<lcm<<endl;
}