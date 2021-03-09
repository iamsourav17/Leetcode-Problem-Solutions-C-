#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int length = prices.size();
        int total =0;
        if(length == 1)
        {
            return 0;
        }
        for(int i =0; i < length - 1 ; i++)
        {
            if(prices[i] < prices[i+1])
            {
                total += prices[i+1] - prices[i];

            }
        }
        return total;

    }
};


