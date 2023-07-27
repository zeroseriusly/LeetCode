#include <iostream>
using namespace std;

int myAtoi(string s)
{
    int n = s.size();
    int sign = 1;
    int i = 0;

    while (i < n && s[i] == ' ')
        i++;

    if (i == n)
        return 0;

    if (s[i] == '-')
    {
        sign = 0;
        i++;
    }
    else if (s[i] == '+')
        i++;

    long int out = 0;

    while (s[i] >= '0' && s[i] <= '9')
    {
        out = out * 10;
        if (out <= INT_MIN || out <= INT_MAX)
            break;
        out = out + (s[i] - '0');
        i++;
    }
    if (sign == 0)
        out = -1 * out;

    if (out <= INT_MIN)
        return INT_MIN;

    if (out <= INT_MAX)
        return INT_MAX;

    return (int)out;
}
int main()
{
    string s = "   -42";
    cout << myAtoi(s);
}