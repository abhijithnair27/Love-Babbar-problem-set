#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {3, 9, 12, 16, 20};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    
        
    sort(arr,arr+n); 
        int i,mx,mn,ans;
        ans = arr[n-1]-arr[0];  // this can be one possible solution
        
        for(i=0;i<n;i++)
        {
            if(arr[i]>=k)  // since height of tower can't be -ve so taking only +ve heights
            {
                mn = min(arr[0]+k, arr[i]-k);
                mx = max(arr[n-1]-k, arr[i-1]+k);
                ans = min(ans, mx-mn);
            }
        }
    cout<<ans;
    
}
