#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    //pre computation
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;//if hash[256]then direct s[i] only
    }
    int n;
    cin>>n;
    while(n--){
        char c;
        cin>>c;
        //fetching
        cout<<hash[c-'a']<<endl;
    }
    return 0;
}