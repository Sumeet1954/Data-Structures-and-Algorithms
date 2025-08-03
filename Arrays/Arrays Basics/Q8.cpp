//Check if an Array is Sorted Forward, Backward or Not at All


#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    public:
    bool isAscending(vector<int> &nums){
        
        int n=nums.size()-1;
        for(int i = 0; i < n;i++){
            if(!(nums[i] < nums[i+1])){
                return false;
            }
        }
        return true;
    }
    
    bool isDecending(vector<int> &nums){
        int n=nums.size()-1;
        for(int i = 0; i < n;i++){
            if(!(nums[i] > nums[i+1])){
                return false;
            }
        }
        return true;
    }
    void arraySortCheck(vector<int> &nums){
        if(isAscending(nums)){
            cout<<"Array is Sorted in ASC"<<endl;
        }
        else if(isDecending(nums)){
            cout<<"Array is Sorted in DSC"<<endl;
        }
        else{
            cout<<"Array is Not Sorted";
        }
    }
};

int main()
{
    vector<int> nums{1,2,3,4,5,8,7,8};
    Solution S;
    S.arraySortCheck(nums);
}