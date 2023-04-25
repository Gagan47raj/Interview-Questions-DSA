#include<iostream>
#include <bits/stdc++.h>

using namespace std;




//optimised
int maxProfitO(vector<int> &prices) {
    int first_buy = INT_MIN;
    int first_sell = 0;

    int second_buy = INT_MIN;
    int second_sell = 0;

    for(int i = 0; i<prices.size(); i++)
    {
        first_buy = max(first_buy, -prices[i]);
        cout<<i<<" : "<<first_buy<<endl;
        first_sell = max(first_sell, first_buy + prices[i]);

        second_buy = max(second_buy, first_sell - prices[i]);
        cout<<i<<" : "<<second_buy<<endl;
        second_sell = max(second_sell, second_buy + prices[i]);
    }

    return second_sell;
}

int main()
{
    vector<int> prices {10,22,5,75,65,80};
    cout << maxProfitO(prices);

    return 0;
}