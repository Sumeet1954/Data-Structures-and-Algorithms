//Find the Maximum Element in an Array

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    public:
    int maxElement(vector<int> &nums)
    {
        int max = nums[0];
        for(int i =1; i<nums.size();i++){
            if(max < nums[i]){
                max = nums[i];
            }
        }
        return max;  
    }
};

int main()
{
    vector<int> nums{-1,0,1,2,-1,-4};
    Solution S;
    int max = S.maxElement(nums);
    cout<<"Maximum element is : "<<max;
}