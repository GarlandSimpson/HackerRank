#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;


int main()
{
	vector<int> prices = { 1, 12, 5, 111, 200, 1000, 10 };
	int k = 50;

	list<signed long> valid_prices;
	
	int size = static_cast<int>(prices.size());
	signed long total_price = 0;
	int count = 0;

	for (int i = 0; i < size; ++i)
	{
		if (prices[i] < k)
		{
			valid_prices.push_back(prices[i]);
			total_price += prices[i];
			++count;
		}
	}
	if (total_price > k)
	{ 
		valid_prices.sort();
		while (total_price > k)
		{
			total_price -= valid_prices.back();
			valid_prices.pop_back();
			--count;
		}
	}

	cout << count << endl;


	cout << endl << endl;
	// system("Pause"); // uncomment if using Visual Studio
	return 0;
}