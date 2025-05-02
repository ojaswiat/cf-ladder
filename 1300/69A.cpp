#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int directions[n][3];
    for (int i = 0; i < n; i++)
    {
        std::cin >> directions[i][0] >> directions[i][1] >> directions[i][2];
    }

    int x = 0, y = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        x += directions[i][0];
        y += directions[i][1];
        z += directions[i][2];
    }

    if (x == 0 && y == 0 && z == 0)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}