#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findDuplicate() {
    
        int arr[]={1,4,6,6,3};
 int n=sizeof(arr)/sizeof(arr[0]);
   sort(arr,arr+n);
   
     for(int i=0;i<n;i++)
   {
    if(arr[i]==arr[i+1])
    {
        cout<<"duplicate is"<<arr[i];
    }
   }
    }
    
};
int main()
{
     
    Solution s;
    
     s.findDuplicate();
     return 0;
}