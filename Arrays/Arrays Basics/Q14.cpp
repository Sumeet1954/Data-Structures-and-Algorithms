//Insert an Element at the Xth Position, Shifting Right

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    public:
    void xthPositionInsertion(vector<int> &nums, int x,int val)
    {   int j = nums.size()-1;
        nums.push_back(0);
        for(int i = j; i>=x;i--){
            nums[i+1] = nums[i];
        }
        nums[x] = val;

        for(int i =0;i<nums.size();i++){
            cout<<nums[i]<<endl;
        }
    }
};

int main()
{
    vector<int> nums{2,3,4,5,6,4,4,5};
    int x = 2;
    int val = 10;
    Solution S;
    S.xthPositionInsertion(nums,x,val);
}