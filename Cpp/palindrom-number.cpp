#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
 		if(x < 0) return false;
 		if(x < 10) return true;
		return to_string(x) == data(x);
    }

	string data(int x){
		if(x < 10) return to_string(x);
		if(x/10 < 10)return to_string(x%10) + to_string(x/10);
		return to_string(x%10)+data(x/10);
	}
};

int main(){
	Solution sol;
	bool response = sol.isPalindrome(1001);
	if(response){
		cout << "is palinfrome" << endl;
	}else{
		cout << "is not palidrome" << endl;
	}
	return 0;
}
