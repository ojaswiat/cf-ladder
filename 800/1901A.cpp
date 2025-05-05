#include <iostream>
#include <algorithm>

using namespace std;

int find_max_distance(int a[], int n)
{
    int max_distance = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] > max_distance)
        {
            max_distance = a[i + 1] - a[i];
        }
    }

    return max_distance;
}

int main(void)
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, x;
        cin >> n >> x;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int start_distance = a[0];
        int max_distance = find_max_distance(a, n);
        int end_distance = x - a[n - 1];

        cout << max(start_distance, max(max_distance, end_distance * 2)) << endl;
    }

    return 0;
}