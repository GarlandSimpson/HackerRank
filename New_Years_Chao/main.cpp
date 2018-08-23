/*
Author: Garland Simpson
Date: 8/22/2018

Minimum Swaps 2 challenge

*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


/*

	This program checks to see the minimum number of swaps that were made for anyone element. If it is greater than two than a message is printed
*/

int main()
{
	vector<int> q = { 2, 5, 1, 3, 4 }; // should be "Two chaotic"
	// vector<int> q = { 2, 1, 5, 3, 4 } // should be 3 swaps 
       // vector<int> q = { 5, 1, 2, 3, 7, 8, 6, 4 } // should be "Too chaotic" 
       // vector<int> q = { 1, 2, 5, 3, 7, 8, 6, 4 } // should be "Too chaotic"

	int swap_count = 0;
	int n = static_cast<int>(q.size());
	bool chaotic = false;
	for (int i = n - 1; i > -1; --i)
	{
		if (q[i] - (i + 1) > 2)
		{
			cout << "Too Chaotic" << endl;
			chaotic = true;
			break;
		}

		for (int j = max(0, q[i] - 2); j < i; ++j)
		{
			if (q[j] > q[i]) ++swap_count;
		}
	}
	if (!chaotic)
		cout << swap_count << endl;


	cout << endl << endl;
	system("Pause"); // Comment out if not using Visual Studios
	return 0;
}
