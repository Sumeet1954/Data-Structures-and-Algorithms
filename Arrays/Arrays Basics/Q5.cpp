//Create Two Arrays one for Odd Elements and one for Even Elements

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void oddArray(vector<int> &nums)
    {
        cout<<"The Odd Array\n";
        vector<int> odd;
        for (int i = 0; i < nums.size(); i++)
        {
           if(nums[i]%2==1){
            odd.push_back(nums[i]);
           } 
        }
        for(int i = 0;i<odd.size();i++){
            cout<<odd[i]<<endl;
        }
    }
    void evenArray(vector<int> &nums)
    {
        cout<<"The Even Array\n";
        vector<int> even;
        for (int i = 0; i < nums.size(); i++)
        {
           if(nums[i]%2==0){
            even.push_back(nums[i]);
           } 
        }
        for(int i = 0;i<even.size();i++){
            cout<<even[i]<<endl;
        }   
     }
};

int main()
{
    vector<int> nums{1, 2, 3, 4, 5, 6};
    Solution S;
    S.oddArray(nums);
    S.evenArray(nums);
    
}