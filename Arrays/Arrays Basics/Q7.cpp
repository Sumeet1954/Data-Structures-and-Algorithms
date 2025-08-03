//Count Occurrences of a Target Number in an Array

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    public:
    void countOcc(vector<int> &nums , int target)
    {
        int count=0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==target){
                count++;
            }
        }
        cout<<"The Element Occurs "<<count<<" times."<<endl;
    }
};

int main()
{
    vector<int> nums{2,3,4,5,6,4,4,5};
    int target = 4;
    Solution S;
    S.countOcc(nums,target);
    
}