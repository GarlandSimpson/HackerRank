/*
Author: Garland Simpson
Date: 8/22/2018

Minimum Swaps 2 challenge

*/


#include<iostream>
#include<vector>

using namespace std;


/*

   solves the problem of finding the minimal number of swaps needed to sort an array of consecutive integers in ascending order
*/

int main()
{
	vector<int> arr = { 4, 3, 1, 2}; // should be 3 swaps
	// vector<int> arr = { 2, 3, 4, 1, 5 } // should be 3 swaps 
	// vector<int> arr = { 1, 3, 5, 2, 4, 6, 8 } // should be 3 swaps 

	int swap_count = 0;
	int n = static_cast<int>(arr.size());

	for (int i = 0; i + 1 < n; ++i)
	{
		if (arr[i] != i + 1)
		{
			swap(arr[i], arr[arr[i] - 1]);
			++swap_count;
			--i;
		}
	}

	cout << "Minimum swaps: " << swap_count << endl;

	cout << endl << endl;
	system("Pause"); // Comment out if not using Visual Studios
	return 0;
}