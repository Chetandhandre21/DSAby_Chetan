#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void miniMaxSum(vector<int> arr) {
    sort(arr.begin(),arr.end());
    long max=0,min=0;
    int len=arr.size();
    
    for(int i=0;i<len-1;i++)
    {
        min+=arr[i];
        max+=arr[len-1-i];
    }
   cout<<min<<" "<<max;
    
}
int main()
{
    vector <int> arr;
    arr={1,2,3,4,5};
    miniMaxSum(arr);
}
