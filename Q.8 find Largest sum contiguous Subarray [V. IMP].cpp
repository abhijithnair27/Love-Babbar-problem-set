#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,-2,5};
    int c = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;
    int max_till_here = 0;
        
    for(int i=0;i<c;i++) {
        max_till_here = max_till_here + arr[i];
        if( max_till_here > max) {
            max = max_till_here;
        }
        if(max_till_here < 0) {
            max_till_here = 0;
        }
    }
    cout<<max;
    
}
