#include <iostream>
#include <string>

using namespace std;

bool check(string s, string x)
{
    if (s.size() > x.size())
    {
        return false;
    }
    // from i = 0 to maximum sub string length possible
    for (int i = 0; i < x.size() - s.size() + 1; i++)
    {
        if (x.substr(i, s.size()) == s)
        {
            return true;
        }
    }

    return false;
}

int main(void)
{
    int t;
    cin >> t;

    while (t--)
    {
        int m, n;
        cin >> m >> n;

        string x, s;
        cin >> x >> s;

        // even after 5 operations, if we cannot find a string, then the string is not there simply because len(s1) * len(s2) = 25
        string appended_x[6];
        appended_x[0] = x;

        for (int i = 1; i < 6; i++)
        {
            appended_x[i] = appended_x[i - 1] + appended_x[i - 1];
        }

        int ans = -1;
        for (int i = 0; i < 6; i++)
        {
            if (check(s, appended_x[i]))
            {
                ans = i;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}