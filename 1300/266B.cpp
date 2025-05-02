#include <iostream>

int main()
{
    int n, t;
    std::cin >> n >> t;

    char a[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] == 'B' && a[j + 1] == 'G')
            {
                std::swap(a[j], a[j + 1]);
                j++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << a[i];
    }

    return 0;
}