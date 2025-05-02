#include <iostream>

bool does_not_repeat(int n)
{
    int check[10] = {0};
    int last_digit;

    while (n != 0)
    {
        last_digit = n % 10;
        check[last_digit] += 1;

        n /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (check[i] > 1)
        {
            return false;
        }
    }
    return true;
}

int main(void)
{
    int n;
    std::cin >> n;

    for (int i = n + 1; i < 10000; i++)
    {
        if (does_not_repeat(i))
        {
            std::cout << i << std::endl;
            return 0;
        }
    }

    return 0;
}