#include <iostream>

using namespace std;

int main(void)
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        // If array has the element k, we choose a subarray of size 1 which contains 'k'.
        // Means, if the array has k, the answer is yes, or else, the anser is no.
        int a[n];
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == k)
            {
                cout << "YES" << endl;
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}