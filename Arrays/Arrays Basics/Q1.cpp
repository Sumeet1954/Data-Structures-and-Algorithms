// Print Each Element and Its Index in an Array

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    public:
    void printElement(vector<int> &nums)
    {   int val , c = 0;
        for(int i = 0 ; i < nums.size()-1;i++){
            cout<<"Element "<<c++<<":" <<nums[i] <<endl;
        }
    }
};

int main()
{
    vector<int> nums{2,3,4,5,6,4,4,5};
    Solution S;
    S.printElement(nums);
}