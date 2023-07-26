#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s, s1;

    for (int i = 0; i < n; i++)
    {
        cin >> s1;
        s = s + s1;
    }

    string s3;
    cin >> s3;

    // We have to compare both string. If all the string in continous order of s3 compares to s1 then Harry will win

    int count = 0;

    for (int i = 0; i < s3.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (s3[i] == s[j])
            {
                count++;
            }
        }
    }

    cout << count << endl;

    if (count == s3.size() - 1)
        cout << "Harry" << endl;
    else
        cout << "Voldemort" << endl;
}