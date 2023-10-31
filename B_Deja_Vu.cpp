#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        int n, q;
        cin >> n >> q;
        int numbers[n];
        int duplicate[31];
        int get;
        vector<int> querry;
        for (int i = 0; i < n; i++)
            cin >> numbers[i];
        for (int i = 0; i < q; i++)
        {
            cin >> get;
            if (duplicate[get] == 0)
            {
                duplicate[get] = 1;
                querry.push_back(get);
            }
        }

        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < querry.size(); ++k)
            {

                if (numbers[j] % int(pow(2, querry[k])) == 0)
                    numbers[j] += pow(2, querry[k] - 1);
            }
        }

        for (int i = 0; i < n; i++)
            cout << numbers[i] << " ";
        t--;
    }
}