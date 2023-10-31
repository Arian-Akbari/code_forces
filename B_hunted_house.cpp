#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        int n, counter = 0;
        string number;
        cin >> n;
        cin >> number;
        vector<int> vec;
        int one_count = 0;
        for (char c : number)
        {
            if (c == '0')
                vec.push_back(0);
            else
            {
                one_count++;
                vec.push_back(1);
            }
        }
        reverse(vec.begin(), vec.end());
        vector<int> copy = vec;
        int changes = 0;
        bool flag = true;
        int gg = 0;
        while (counter < n)
        {
            // if (counter > (n - one_count))
            //     flag = false;
            if (!flag)
            {
                cout << -1 << " ";
                counter++;
                continue;
            }
            if (copy[counter] == 1)
            {
                for (int j = counter; j < copy.size(); j++, changes++)
                {
                    if (copy[j] == 0)
                    {
                        copy[j] = 1;
                        copy[counter] = 0;
                        break;
                    }
                }
            }
            if (copy[counter] == 1)
                flag = false;
            if (!flag)
                cout << -1 << " ";
            else
                cout << changes << " ";

            counter++;
        }
        t--;
    }
}