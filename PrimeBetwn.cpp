#include<iostream>
using namespace std;

int main()
{
    int lo , hi ;
    cin >> lo >> hi;

    for(int num = lo; num <= hi; num++)
    {
        int div;
        int factors = 0;
        for(div = 2; div * div < num; div++)
        {
            if(num % div == 0)
            {
                factors = factors + 1;
                break;
            }           
        }
        if (factors == 0)
            {
                cout<<num<<endl;
            }
    }
    
    return 0;
}