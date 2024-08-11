#include <bits/stdc++.h>

using namespace std;

class Solution {

public:
    int nonSpecialCount(int l, int r) {
        int count=0;
        int mm=0;
            int sum=0;
        while(true){
            for(int i=l;i<=r;i++)
            {
                for(int j=1;j<=r;j++)
                {
                    if(i%j==0)
                    {
                        count++;
                       cout<<count<<endl;
                        
                    }
                    
                    
                }
                 
                 
            }
            //mm=r-(l-1);
            //cout<<mm-sum;
            //cout<<sum;
        break;
           
            
        }
      
        
    }
   
};
int main()
{
    Solution s;
    s.nonSpecialCount(4,16);
    return 0;
}