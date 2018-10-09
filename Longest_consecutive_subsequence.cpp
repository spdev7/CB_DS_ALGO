#include<iostream>
#include <vector>
using namespace std;

//#include "solution.h"
vector<int> longestSubsequence(int *arr, int n){
       
       if()
}


int main() {
	int n;
	cin >> n;
	int *input = new int[n];
	for(int i = 0; i < n; i++){
		cin >> input[i];
	}
	vector<int> output = longestSubsequence(input, n);
	for(int i = 0; i < output.size(); i++) {
		cout << output[i] << endl;
	}
}