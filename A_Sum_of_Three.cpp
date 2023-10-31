#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> t;
    while (t != 0)
    {
        cin >> n;
        int x = 0, y = 0, z = 0;
        bool possible = false;
        x = 1;
        y = 2;
        z = n - 3;
        while (true)
        {
            if (y >= z || z == 1)
            {
                break;
            }
            if (x % 3 != 0 && y % 3 != 0 && z % 3 != 0)
            {
                possible = true;
                break;
            }
            y++;
            z--;
        }
        if (possible)
        {
            cout << "YES\n";
            cout << x << " " << y << " " << z << "\n";
        }
        else
            cout << "NO\n";
        t--;
    }

    return 0;
}
