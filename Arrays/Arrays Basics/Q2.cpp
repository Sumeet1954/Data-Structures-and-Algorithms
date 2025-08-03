// Print Elements of an Array in Reverse Order

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    public:
    void reverseElement(vector<int> &nums)
    {  
        for(int i = nums.size()-1;i >= 0; i--){
            cout<<nums[i]<<endl;
        }
    }
};

int main()
{
    vector<int> nums{1,2,3,4,5,6};
    Solution S;
    S.reverseElement(nums);
   
}