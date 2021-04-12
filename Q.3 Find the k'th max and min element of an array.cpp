#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = { 7, 10, 4, 3, 20, 15 };
    int c = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    
    priority_queue <int> pq;
    priority_queue <int, vector<int>, greater<int> > pt;
    
    for(int i =0;i<c;i++) {
        pq.push(arr[i]);
        if(pq.size() > k) {
            pq.pop();
        } 
    }
    for(int i =0;i<c;i++) {
        pt.push(arr[i]);
        if(pt.size() > k) {
            pt.pop();
        } 
    }
    
    cout<<"The "<<k<<" smallest element in array is: "<<pq.top()<<"  ";
    cout<<"The "<<k<<" greatest element in array is: "<<pt.top();
    
}
