#include <iostream>

int main(void)
{

    std::string s;
    std::cin >> s;

    std::cout << char(toupper(s[0])) << s.substr(1) << std::endl;

    return 0;
}