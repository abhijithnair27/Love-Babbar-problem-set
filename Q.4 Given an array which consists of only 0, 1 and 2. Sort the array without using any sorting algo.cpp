#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = { 0,1,0,2,2,1,0,1,0,0,1 };
    int c = sizeof(arr)/sizeof(arr[0]);
    int a[c];
    int c0=0, c1=0, c2=0;

    for(int i =0;i<c;i++) {
        if(arr[i] == 0){
            c0++;
        }
        if(arr[i] == 1){
            c1++;
        }
        if(arr[i] == 2){
            c2++;
        }
    }
    int k =0;
    for(int i =0;i<c0;i++) {
        arr[k++] = 0;
    }
    for(int i =0;i<c1;i++) {
        arr[k++] = 1;
    }
    for(int i =0;i<c2;i++) {
        arr[k++] = 2;
    }
    for(int i =0;i<c;i++) {
        cout<<arr[i]<<" ";
    }
}
