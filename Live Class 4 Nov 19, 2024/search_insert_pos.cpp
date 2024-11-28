#include <bits/stdc++.h>
using namespace std;
#define nl "\n"

// https://leetcode.com/problems/search-insert-position/description/

class Solution {
public:

    int searchInsert(vector<int>& nums, int target) {

        int l = 0, r = nums.size()-1;

        while (l<=r) {
            int mid = (l + r) / 2;
            if (nums[mid] == target) {
                return mid;
            }

            if (target < nums[mid]) {
                r = mid - 1;
            } 
            else {
                l = mid + 1;
            }
        }
        return l; 
    }

};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    return 0;
}