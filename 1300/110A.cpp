#include <iostream>

int main(void)
{

    unsigned long long n;
    std::cin >> n;

    int last_digit = 0;
    int lucky_count = 0;

    while (n)
    {
        last_digit = n % 10;
        if (last_digit == 4 || last_digit == 7)
        {
            lucky_count++;
        }

        n /= 10;
    }

    if (lucky_count == 4 || lucky_count == 7)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}