#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = { -12, 11, -13, -5, 6, -7, 5, -3, -6 };
    int c = sizeof(arr)/sizeof(arr[0]);
    int j = 0;

    for(int i =0;i<c;i++) {
        if(arr[i] < 0){
            if(i!=j) {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
            j++;
        }
    }
    
    for(int i =0;i<c;i++) {
        cout<<arr[i]<<" ";
    }
   
}
