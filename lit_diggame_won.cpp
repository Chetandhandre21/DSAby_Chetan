#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        
        int n=nums.size();
        int num1=0;
            int num2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<=9)
            {
                num1+=nums[i];
            }
            else
            {
                num2+=nums[i];
            }
        }
        if(num1>num2)
        {
            return true;
        }
        else if(num2==num1)
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }
};