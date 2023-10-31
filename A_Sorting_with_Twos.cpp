#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++)
        cin >> numbers[i];
    bool flag = false;
    // 1 , 2 , 4 , 8, 16
    for (int i = n - 2; i >= 0; i--)
    {
        if (flag)
            break;
        if (numbers[i] > numbers[i + 1])
        {
            if (i == 7 || i == 15 || i == 3 || i == 1 || i == 0)
            {
                int dif = numbers[i] - numbers[i + 1];
                for (int k = 0; k <= i; k++)
                {
                    numbers[k] -= dif;
                    if (numbers[k] < 0)
                    {
                        flag = true;
                        break;
                    }
                }
            }
            else
            {
                flag = true;
                break;
            }
        }
    }
    if (!flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}