#include <iostream>
using namespace std;

int main() {
    int a[] = {2,1};
    int c = sizeof(a)/sizeof(a[0]);
    
    int min,max;
    if(c%2 == 0) {
        int i=0,j=1;
        if(a[0] > a[1]) {
            max = a[0];
            min = a[1];
        }
        else {
            max = a[1];
            min = a[0];
        }
        for(int i =2;i<c;i=i+2) {
            if(a[i] > a[i+1]) {
                if(a[i]>max){
                    max = a[i];
                }
                if(a[i+1] < min) {
                    min = a[i+1];
                }
            }
            else {
                if(a[i+1]>max){
                    max = a[i+1];
                }
                if(a[i] < min) {
                    min = a[i];
                }
            }
        }
        
        
        
    }
    else {
        max = a[0];
        min = a[0];
        for(int i =1;i<c;i=i+2) {
            if(a[i] > a[i+1]) {
                if(a[i]>max){
                    max = a[i];
                }
                if(a[i+1] < min) {
                    min = a[i+1];
                }
            }
            else {
                if(a[i+1]>max){
                    max = a[i+1];
                }
                if(a[i] < min) {
                    min = a[i];
                }
            }
        }
    }
    cout<<"max: "<<max<<" ";
    cout<<"min: "<<min;
    
	return 0;
}
