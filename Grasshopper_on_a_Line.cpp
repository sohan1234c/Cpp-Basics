#include <iostream>
using namespace std;

int main()
{
    int n, x, k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        
            cin >> x >> k;
            if (x % k == 0)
            {
                 cout << 2 << endl
                 << x-1 << " " << 1 << endl;
            }

            if (x % k != 0)

            {
                 cout << 1 << endl
                 << x << endl;
            }
        

      
    }

    return 0;
}