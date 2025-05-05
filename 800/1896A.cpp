#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int min = a[0];
        for (int i : a)
        {
            if (i < min)
            {
                min = i;
            }
        }

        if (a[0] == min)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}