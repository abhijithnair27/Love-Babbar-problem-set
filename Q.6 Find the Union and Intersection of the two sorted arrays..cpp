#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = { 1,2,4,5,6 };
    int brr[] = { 1,3,4,7,8};
    int c = sizeof(arr)/sizeof(arr[0]);
    int d = sizeof(brr)/sizeof(brr[0]);
    set<int, greater<int> > s1;

    cout<<"union of set is: ";
    
    for(int i =0;i<c;i++) {
        s1.insert(arr[i]);
    }
    
    for(int i =0;i<d;i++) {
        s1.insert(brr[i]);
    }
    for(auto it = s1.begin(); it !=s1.end(); ++it) {
        cout << ' ' << *it;             
    }
    
    cout<<"Intersection of set is: ";
    
    set<int, greater<int> > s2;
    int j = 0,k=0;
    while(j<c && k<d) {
        if(arr[j] == brr[k]) {
            s2.insert(arr[j]);
            j++;
        }
        else if(arr[j] < brr[k]) {
            j++;
        }
        else  {
            k++;
        }
    }
    for(auto it = s2.begin(); it !=s2.end(); ++it) {
        cout << ' ' << *it;             
    }
}
