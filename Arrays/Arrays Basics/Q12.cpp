//Find the Minimum Element in an Array

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    public:
    int minElement(vector<int> &nums)
    {
        int min = nums[0];
        for(int i =1; i<nums.size();i++){
            if(min > nums[i]){
                min = nums[i];
            }
        }
        return min;  
    }
};

int main()
{
    vector<int> nums{-1,0,1,2,-1,-4};
    Solution S;
    int min = S.minElement(nums);
    cout<<"Minimum element is : "<<min;
}