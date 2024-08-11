/*You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. They will only be 
able to blow out the tallest of the candles. Count how many candles are tallest.*/
/*Sample Input 0

4
3 2 1 3
Sample Output 0

2*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int birthdayCakeCandles(vector<int> candles) {
    int  maxpro=0;
    int  count=0;
    int  len =candles.size();
    for(int i=0;i<len;i++)
    {
    maxpro= max(candles[i],maxpro) ;
    }
    for(int j=0;j<len;j++)
    {
        if(maxpro==candles[j])
        {
            count++;
        }
    }
   cout<<count; 

}

int main()
{
     vector <int> candles;
      candles={44,55,7,55,33,55};
    birthdayCakeCandles(candles);
    return 0;
}