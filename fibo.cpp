#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        int first=0,second=1,sum;
        cin>>n;
        for(int i=0;i<=n;i++){
                if(i<=1){
                        sum=1;
                } else {
                        sum = first + second;
                        first = second;
                        second = sum;
                }
        }
        cout<<sum;
}