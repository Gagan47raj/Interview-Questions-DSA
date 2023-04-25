#include<iostream>
#include <bits/stdc++.h>

using namespace std;

//brute force
int maxProfit(vector<int> &prices) {
    int profit = 0;
	for(int i = 0; i < prices.size(); i++) {
		for(int j = i + 1; j < prices.size(); j++) {
			profit = max(profit, prices[j] - prices[i]);
		}
	}
	return profit;
}

//greedy apprach

int maxProfitGreedy(vector<int> &prices)
{
    int buy = prices[0], max_profit = 0;

    for(int i = 1; i<prices.size(); i++)
    {
        if(buy > prices[i])
        {
            buy = prices[i];
        }
        else if(prices[i] - buy > max_profit)
        {
            max_profit = prices[i] - buy;
        }
    }
    return max_profit;
}

//optimised
int maxProfitO(vector<int> &prices) {
    int profit = 0, minPrice = INT_MAX;
	for(int i = 0; i < prices.size(); i++) {
		minPrice = min(minPrice, prices[i]);
		profit = max(profit, prices[i] - minPrice);
	}
	return profit;
}

int main()
{
    vector<int> prices {5,2,6,1,4};

    cout << maxProfit(prices) << endl;

	cout << maxProfitGreedy(prices) << endl;

    return 0;
}