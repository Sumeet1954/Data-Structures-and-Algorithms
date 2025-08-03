// Check if Two Elements Exist with a Sum Equal to a Target Value

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    public:
    void printElement(vector<int> &nums , int target)
    {   int i =0;
        int j = nums.size()-1;
        while(i < j){
            if((nums[i]+nums[j]) == target){
                cout<<"The indexes are :"<<i<<" and "<<j<<endl;
                return ;
            }
            else if((nums[i]+nums[j]) > target){
                j--;
            }
            else{
                i++;
            }
        }
    }
};

int main()
{
    vector<int> nums{2,7,11,15};
    int target = 13;
    Solution S;
    S.printElement(nums , target);
}