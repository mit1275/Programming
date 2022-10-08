// C++ code to print all possible 
// subsequences for given array using 
// recursion 
#include <bits/stdc++.h> 
using namespace std; 

void printArray(vector<int> arr, int n) 
{ 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

// Recursive function to print all 
// possible subsequences for given array 
void printSubsequences(vector<int> arr, int index, 
					vector<int> subarr) 
{ 
	// Print the subsequence when reach 
	// the leaf of recursion tree 
	if (index == arr.size()) 
	{ 
		int l = subarr.size(); 

		// Condition to avoid printing 
		// empty subsequence 
		if (l != 0) 
			printArray(subarr, l); 
	} 
	else
	{ 
		// Subsequence without including 
		// the element at current index 
		printSubsequences(arr, index + 1, subarr); 

		subarr.push_back(arr[index]); 

		// Subsequence including the element 
		// at current index 
		printSubsequences(arr, index + 1, subarr); 
	} 
	return; 
} 


// Driver Code 
int main() 
{ 
	 #ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 #endif
	vector<int> arr{1,1,1}; 
	vector<int> b; 

	printSubsequences(arr, 0, b); 

	return 0; 
} 

// This code is contributed by 
// sanjeev2552 
