#include <bits/stdc++.h>

using namespace std;

/*
 Given a time in -hour AM/PM format, convert it to military (24-hour) time.

Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

Example

s="12:01:00PM"
Return '12:01:00'.

b="12:01:00AM"
Return '00:01:00'.

Function Description

Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.

timeConversion has the following parameter(s):

string s: a time in  hour format
Returns

string: the time in  hour format
Input Format

A single string  that represents a time in -hour clock format (i.e.:  or ).

Constraints

All input times are valid
Sample Input 0

07:05:45PM
Sample Output 0

19:05:45
 */

string timeConversion(string s) {
    int size=s.length();
    
    if(s[8]=='A')
    {
        string hh=s.substr(0,2);
        int h=stoi(hh);
        if(h==12)
        {
            string newh="00";
            string newtime=newh.append(s.substr(2,6));
            return newtime;
        }
        else{
            
            return s.substr(0,size-2);
        }
    }
    else{
        string hh=s.substr(0,2);
        int h=stoi(hh);
        if(h==12)
        {
            return s.substr(0,size-2);
        }
        else{
            int inpm=h+12;
            string newh=to_string(inpm);
            string newtime=newh.append(s.substr(2,6));
            return newtime;
        }
    }

}