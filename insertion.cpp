#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    //write your code here
    int i,j,key;
    for(i=0;i<=n-1;i++){
        j=i;
        while(j>0&&arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    
}
int main(){
    int arr[]={6,4,8,9,21,3};
    insertionSort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
}