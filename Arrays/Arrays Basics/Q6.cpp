//Calculate Sum and Product of Array Elements


#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    public:
    void sumOfElement(vector<int> &nums)
    {   
        int sum = 0;
        for(int i = 0;i < nums.size(); i++){
            sum += nums[i];
        }
        cout<<"The Sum is: "<<sum<<endl;
    }
    void productOfElement(vector<int> &nums)
    {  
        int pro = 1;
        for(int i = 0;i < nums.size(); i++){
            pro *= nums[i];
        }
        cout<<"The Product is :"<<pro<<endl;
    }
};

int main()
{
    vector<int> nums{1,2,3,4,5,6};
    Solution S;
    S.sumOfElement(nums);
    S.productOfElement(nums);
   
}