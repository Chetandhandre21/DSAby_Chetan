#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr) {
    int len=end(arr)-begin(arr);
    float np=0;
    float nn=0;
    float nz=0;
    for(int i=0;i<len;i++)
    {
        if(arr[i] > 0)
        {
           np++;
        }
        else if (arr[i]<0)
        {
            nn++;
        }
        else
        {
            nz++;
        }
    }
    cout<<setprecision(6)<<np/len<<endl;
    cout<<setprecision(6)<<nn/len<<endl;
    cout<<setprecision(6)<<nz/len<<endl;
    cout<<"gg"<<len;
    
    

}
int main()
{
   vector <int> arr;
      arr={1,2,3,6,-2,-3,0,0};
     plusMinus(arr);

}