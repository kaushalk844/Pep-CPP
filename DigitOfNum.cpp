#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int num = n;
    int nod = 0;
    while(num != 0)
    {
        num = num / 10;
        nod = nod + 1;
    }
    int div = pow(10 ,  (nod-1));

    while(div != 0)
    {
        int q = n / div;
        int r = n % div;
        cout<<q<<endl;
        n = r;
        div = div / 10;
    }
    
}