//Count Unique and Duplicate Elements in an Array

#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;
class Solution
{
    public:
    int d_count =0,u_count=0;
    void countUnique(vector<int> &nums){
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i] == nums[i+1]){
                d_count++;
            }
            else{
                u_count++;
            }
        }
    }
    void Display(){
        cout<<"The Unique Element is :"<<u_count<<endl;;
        cout<<"The Duplicate Element is :"<<d_count<<endl;
    }
   
};

int main()
{
    vector<int> nums{2,3,4,5,6,4,4,5};
    Solution S;
    S.countUnique(nums);
    S.Display();
}