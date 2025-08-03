// Delete an Element at the Xth Position, Shifting Left

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    public:
    void xthPositionDeletion(vector<int> &nums, int x)
    {   int j = nums.size()-1;
        for(int i =x;i<j;i++){
            nums[i] = nums[i+1];
        }
        nums.pop_back();
        for(int i =0;i<nums.size();i++){
            cout<<nums[i]<<endl;
        }
    }
};

int main()
{
    vector<int> nums{2,3,4,5,6,4,4,5};
    int x = 2;
    Solution S;
    S.xthPositionDeletion(nums,x);
}