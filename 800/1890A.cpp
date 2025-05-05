#include <iostream>

using namespace std;

string solve(int a[], int n)
{
    if (n == 2)
    {
        return "YES";
    }

    // There will always be either single number or two numbers in the array whose count difference is 1 or 0
    int num1 = -1, num2 = -1;
    int countNum1 = 0, countNum2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (num1 == -1)
        {
            num1 = a[i];
            countNum1++;
        }
        else if (a[i] == num1)
            countNum1++;

        else if (num2 == -1)
        {
            num2 = a[i];
            countNum2++;
        }
        else if (a[i] == num2)
            countNum2++;

        else if (a[i] != num1 && a[i] != num2) // different number is found
            return "NO";
    }

    // even number of elements || only one number || two numbers with 1 count difference
    if (countNum1 == countNum2 || num1 == -1 || num2 == -1 || abs(countNum1 - countNum2) == 1)
        return "YES";

    return "NO";
}

int main(void)
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << solve(a, n) << endl;
    }

    return 0;
}