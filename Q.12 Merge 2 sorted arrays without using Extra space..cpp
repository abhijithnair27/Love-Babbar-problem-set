#include <iostream>
using namespace std;
int nextGap(int gap)
    {
        if (gap <= 1)
            return 0;
        return (gap / 2) + (gap % 2);
    }

void merge(int arr1[], int arr2[], int n, int m) {
	    
        int i, j, gap = n + m;
    for (gap = nextGap(gap);
         gap > 0; gap = nextGap(gap))
    {
        // comparing elements in the first array.
        for (i = 0; i + gap < n; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);
 
        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0;
             i < n && j < m;
             i++, j++)
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);
 
        if (j < m) {
            // comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
        }
    }
}

int main() {
	int arr1[] = {1, 3, 5, 7};
	int arr2[] = {0, 2, 6, 8, 9};
	int n = sizeof(arr1)/sizeof(arr1[0]);
	int m = sizeof(arr2)/sizeof(arr2[0]);	
	
	merge(arr1,arr2,n,m);
	
	for(int i = 0;i<n;i++) {
	    cout<<arr1[i]<<" ";
	}
	for(int i = 0;i<m;i++) {
	    cout<<arr2[i]<<" ";
	}
	
	return 0;
}
