#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        int x, k;
        cin >> x >> k;
        while (true)
        {
            int sum = 0;
            int test = x;
            while (test != 0)
            {
                sum += test % 10;
                test /= 10;
            }
            if (sum % k != 0)
                ++x;
            else
                break;
        }
        cout << x << endl;
        t--;
    }
}