#include <iostream>
#include <string>
using namespace std;

string convert(string s, int numRows)
{
    if (numRows == 1)
        return s;

    int in = 2 * (numRows - 1);
    int n = s.size();
    string s1;

    for (int i = 0; i < numRows; i++)
    {
        for (int j = i; j < n; j += in)
        {
            s1 += s[j];

            // Calculate the second index based on the current row position
            int second = j + in - 2 * i;
            if (i != 0 && i != numRows - 1 && second < n)
            {
                s1 += s[second];
            }
        }
    }
    return s1;
}

int main()
{
    string s = "PAYPALISHIRING";
    int numRows = 4;

    cout << convert(s, numRows) << endl;

    return 0;
}
