#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums1 = {};
    vector<int> nums2 = {1};

    double findMedianSortedArrays(vector<int> & nums1, vector<int> & nums2)
    {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());

        int mid = nums1.size() / 2;

        if (mid % 2 == 0)
            return double((nums1[mid - 1] + nums1[mid]) / 2.0);
        else
            return double(nums1[mid]);
    }

    return 0;
}