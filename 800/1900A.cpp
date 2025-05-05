#include <iostream>
#include <string>

using namespace std;

int fill_water(string s, int n)
{

    bool continuous_three = false;
    int dot_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            dot_count++;
        }

        if (i < n - 1 && i < n - 2)
        {
            if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
            {
                continuous_three = true;
                break;
            }
        }
    }

    return continuous_three ? 2 : dot_count;
}

int main(void)
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        cout << fill_water(s, n) << endl;
    }

    return 0;
}