#include <bits/stdc++.h>

using namespace std;

class Solution {

public:
   vector<int> twoSum(vector<int>& nums, int target) {
		int i = 0, j = 0;
	    bool fined = false;
		for(i = 0; i < nums.size(); i++){
			for(j = i+1;j < nums.size(); j++){
				int num1 = nums[i];
				int num2 = nums[j];
				if ((num1+num2) == target){
					cout << "entra: " + to_string(num1+num2) << endl;
                    fined = true;
				}
			}
			if(fined){
				break;
			}			
		}

		return {i, j};
    }
};


int main() {
	Solution sol;
	vector<int> nums = {2,7,11,15};
	vector<int> result = sol.twoSum(nums, 9);
	cout << "result num1: " + to_string(result.at(0)) + " and num2: " + to_string(result.at(1)) << endl;
	if(result.at(0) == 0){
		cout << "false";
	}
	else{
		cout << "true";
	}
	return 0;
}
