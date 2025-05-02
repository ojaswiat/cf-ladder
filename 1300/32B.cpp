#include <iostream>

int main()
{
    std::string s;
    std::cin >> s;

    std::string res;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '.')
        {
            res.append("0");
        }
        else if (s[i] == '-')
        {
            if (s[i + 1] == '.')
            {
                res.append("1");
            }
            else
            {
                res.append("2");
            }
            ++i;
        }
    }

    std::cout << res << std::endl;

    return 0;
}
