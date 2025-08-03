// Print Alternate Elements of an Array


#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    public:
    void reverseAltElement(vector<int> &nums)
    {   cout<<"Reverse Alternate Element"<<endl;
        for(int i = nums.size()-1;i >= 0; i--){
            cout<<nums[i]<<endl;
            i--;
        }
    }
    void forwardAltElement(vector<int> &nums)
    {  cout<<"Forward Alternate Element"<<endl;
        for(int i = 0;i < nums.size(); i++){
            cout<<nums[i]<<endl;
            i++;
        }
    }
};

int main()
{
    vector<int> nums{1,2,3,4,5,6};
    Solution S;
    S.reverseAltElement(nums);
    S.forwardAltElement(nums);
   
}