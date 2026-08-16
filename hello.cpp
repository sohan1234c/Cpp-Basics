#include <iostream>
using namespace std;

int main()
{
    int n,x,k,x1,f=0;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n;j++)
        {
            cin >> x >> k;
            if(x%k==0)
            {
                x1 = x - 1;

            }

            if(x%k!=0)
            
            {
                f = 1;
            }

        }


        if(f!=1)
        {
            cout << 2 << endl
                 << x1 << " " << x1 - x << endl;
        }
        else
        {
            cout << 1 << x << endl;
            
        }
    }

        return 0;
}