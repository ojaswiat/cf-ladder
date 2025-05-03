#include <iostream>

int main(void)
{
    std::string s;
    std::cin >> s;

    int count_upper = 0;
    int count_lower = 0;

    for (char c : s)
    {
        if (isupper(c))
        {
            count_upper++;
        }
        else
        {
            count_lower++;
        }
    }

    if (count_upper > count_lower)
    {
        for (char &c : s)
        {
            c = toupper(c);
        }
    }
    else
    {
        for (char &c : s)
        {
            c = tolower(c);
        }
    }

    std::cout << s << std::endl;

    return 0;
}