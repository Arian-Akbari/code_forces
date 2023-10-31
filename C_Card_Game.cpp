#include <iostream>
#include <vector>

using namespace std;
#define max_size 2e5 + 50
long long int a[int(max_size)] = {0}, rep[int(max_size)] = {0};
int main()
{
    vector<int> vec;
    int t = 0, n = 0;
    cin >> t;
    while (t != 0)
    {
        cin >> n;
        int input;
        for (int i = 0; i <= n + 2; i++)
        {
            rep[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int max_score = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            rep[i] = rep[i + 1] + (a[i] >= 0 ? a[i] : 0);
        }
        for (int i = 0; i < n; i++)
        {
            max_score = max(max_score, rep[i + 1] + (i % 2 == 0 ? a[i] : 0));
        }
        cout << max_score << endl;
        t--;
    }
}
