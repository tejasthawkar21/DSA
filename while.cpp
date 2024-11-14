#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int even=0,odd=0;
    //13245
    while (n!=0)
    {
        int num=n%10;//num=0
        if(num%2==0)even+=num;//12
        else odd+=num;//9
        n=n/10;//
    }
    cout<< even <<" "<<odd;
    
    return 0;
}