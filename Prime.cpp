#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for (int i = 1; i <= t; i++)
    {
        int n;
        cin>>n;
        int factors = 0;
        for (int div = 2; div * div <= n; div++)
        {
            if(n % div == 0)
            {
                factors = factors + 1;
                break;
            }
        }
        if(factors == 0)
        {
            cout<<"Prime"<<endl;
        }
        else
        {
            cout<<"Not Prime"<<endl;
        }
        
        
    }
    
}