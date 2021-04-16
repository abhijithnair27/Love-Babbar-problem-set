#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int start = intervals[0][0];
        int end = intervals[0][1];
        
        vector<vector<int> > vec;
            for(auto i : intervals) {  
                if( i[0] > end ) {
                    vec.push_back({start, end});
                    start = i[0];
                    end = i[1];
                } 
                else {
                    end = max(end, i[1]);
                }
                    
                }
        vec.push_back({start, end});
            return vec;
    }

int main() {
	// your code goes here
    vector<vector<int>> vec{ { 1, 3 }, { 2, 6 }, { 8, 10 }, { 15, 18 } }; 
    vector<vector<int>> mer = merge(vec);
    for(int i = 0;i<mer.size();i++) {
        cout<<"{ ";
        for(int j = 0;j<mer[i].size();j++) {
            cout << mer[i][j]<<" ";
        }
        cout<<"}, ";
    }
    
	return 0;
}
