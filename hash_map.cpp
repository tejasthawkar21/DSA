#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int> mpp;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    //iteration on map mpp
    for(auto it :mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int num;
    cin>>num;
    for(int j=0;j<n;j++){
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }
    return 0;
}