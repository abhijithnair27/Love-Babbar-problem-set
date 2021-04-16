#include <iostream>
using namespace std;

int findDuplicate(int nums[]) {
        int n = sizeof(nums)/sizeof(nums[0]);
        int i = 0;
        while(i<n) {
            if((i+1) == nums[i]) {
                i++;
            }
            else {
                if(nums[i] == nums[nums[i]-1]) {
                    return nums[i];
                }
                else {
                    int c = nums[i]-1;
                    nums[i] = nums[i] + nums[c];
                    nums[c] = nums[i] - nums[c];
                    nums[i] = nums[i] - nums[c];
                }
            }
        }
        return n;
        
    }

int main() {
	int nums[] = {3,1,3,4,2};
	int d = findDuplicate(nums);
	
	cout<<d;
	
	return 0;
}
