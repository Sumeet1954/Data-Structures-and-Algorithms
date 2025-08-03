// Create a Duplicate of an Array

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void duplicateArray(vector<int> &nums)
    {
        vector<int> d;
        for (int i = 0; i < nums.size(); i++)
        {
            d.push_back(nums[i]);
        }
    }
};

int main()
{
    vector<int> nums{1, 2, 3, 4, 5, 6};
    Solution S;
    S.duplicateArray(nums);
}