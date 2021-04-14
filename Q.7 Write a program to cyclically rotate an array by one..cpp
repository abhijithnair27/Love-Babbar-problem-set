#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = { 1,2,4,5,6 };
    int c = sizeof(arr)/sizeof(arr[0]);
    for(int i=c-1;i>0;i--) {
        arr[i] = arr[i] + arr[i-1];
        arr[i-1] = arr[i] - arr[i-1];
        arr[i] = arr[i] - arr[i-1];
        
    }
    for(int i =0;i<c;i++) {
        cout<<arr[i]<<" ";
    }
}
