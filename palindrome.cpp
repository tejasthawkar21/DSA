#include <bits/stdc++.h>
using namespace std;

bool palindrome(int i,string s)
{
    
    if(i>=s.length()/2) return true;

    if(s[i]!=s[s.length()-i-1]) return false;

    else return palindrome(i+1,s);
}

int main()
{
    string s = "malayalam";
    cout<<palindrome(0,s);
    
    return 0;
}