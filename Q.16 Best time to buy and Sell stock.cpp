#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i = 0;
        int buy = INT_MAX;
        int sum = 0;
        while(i<n) {
            if(prices[i] < buy) {
                buy = prices[i];
            }
            sum = max(sum,prices[i]-buy);
            i++;     
        }
        return sum;
    }

int main() {
	// your code goes here
	vector<int> arr{7,1,5,3,6,4};
	cout<<maxProfit(arr);
	
	return 0;
}
