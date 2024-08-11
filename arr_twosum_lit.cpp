#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int d,c;
        int len=end(nums)-begin(nums);
        for(int i=0;i<len;i++)
        {
            for(int j=0;j<len;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                     d=i;
                     c=j;
                }
                
            }
        }
        cout<<"["<<c<<","<<d<<"]";



        
    }
};
int main()
{
    Solution s;
    vector <int> nums;
    int target=9;
    nums={2,7,11,15};
    s.twoSum(nums,target);

}