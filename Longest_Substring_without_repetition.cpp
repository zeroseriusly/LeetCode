#include <iostream>
using namespace std;

int main()
{
    string s = 'abcabccbb';
    int lengthOfLongestSubstring(string s)
    {
        const int SIZE = 128; // Use 128 instead of 26 to accommodate all ASCII characters
        int myArray[SIZE] = {0};

        int count = 0, max_count = 0;
        int start = 0;

        for (int i = 0; i < s.size(); i++)
        {
            int ascii = int(s[i]); // Convert the character to its ASCII number
            if (myArray[ascii] != 0)
            {
                // Update the start index to the next position after the repeated character
                while (s[start] != s[i])
                {
                    myArray[int(s[start])] = 0;
                    start++;
                }
                start++;
                count = i - start + 1;
            }
            else
            {
                myArray[ascii] = 1;
                count++;
            }
            if (count > max_count)
                max_count = count;
        }

        return max_count;
    }

    return 0;
}
