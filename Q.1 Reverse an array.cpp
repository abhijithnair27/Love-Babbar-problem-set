#include <iostream>
using namespace std;

int main() {
    int a[] = { 1,2,3 };
    int c = sizeof(a)/sizeof(a[0]);
    int i =0,j=c-1;
    while(i<j) {
        a[i] = a[i] + a[j];
        a[j]= a[i] - a[j];
        a[i] = a[i] - a[j];
        i++;
        j--;
    }
    for(int k=0;k<c;k++) {
        cout<<a[k];
    }
	return 0;
}