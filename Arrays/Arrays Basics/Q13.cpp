//Find the Maximum Element in an Array

#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include<stack>
using namespace std;
class Solution
{
    public:
    int secMaxElement(vector<int> &nums)
    {   sort(nums.begin(),nums.end());
        return *(nums.end()-2);
    }
};

int main()
{
    vector<int> nums{1,2,2,34,32,3,73,44};
    Solution S;
    int max = S.secMaxElement(nums);
    cout<<"Second Maximum element is : "<<max;
}