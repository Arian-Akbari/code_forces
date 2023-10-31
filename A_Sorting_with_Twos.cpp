#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t != 0) {
        int n;
        cin >> n;
        int numbers[n];
        for (int i = 0; i < n; i++)
            cin >> numbers[i];
        bool flag = false;
        for (int i = n - 2; i >= 0; i--) {
            if (numbers[i] > numbers[i + 1] && !(i == 7 || i == 15 || i == 3 || i == 1 || i == 0)) {
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        t--;
    }
}