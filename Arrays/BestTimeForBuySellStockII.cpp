#include<iostream>
#include <bits/stdc++.h>

using namespace std;




//optimised
int maxProfitO(vector<int> &prices) {
    int profit = 0, minPrice = INT_MAX;
	for(int i = 1; i < prices.size(); i++) {
		if(prices[i] > prices[i-1])
        {
            profit += (prices[i] - prices[i-1]);
        }
	}
	return profit;
}

int main()
{
    vector<int> prices {5,2,6,1,4,7,3,6};

    

    cout << maxProfitO(prices);

    return 0;
}