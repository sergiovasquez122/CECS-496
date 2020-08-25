#include <iostream>
#include <unordered_map>

using namespace std;

int fib(int n, unordered_map<int, int>& memo){
	if(memo.count(n)) return memo[n];
	if(n <= 1) return 1;
	memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
	return memo[n];
}

int main(){
	int input;
	unordered_map<int, int> memo;
	while(cin >> input){
		if(input == 0) break;
		cout << fib(input, memo) << endl;
	}
	return 0;
}
