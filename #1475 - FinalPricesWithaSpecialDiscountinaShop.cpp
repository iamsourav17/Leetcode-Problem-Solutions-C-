#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
       for(int i = 0; i<prices.size();i++)
        {
            for(int j = i+1;j<prices.size();j++)
            {
                if(prices[i]>=prices[j])
                {
                    prices[i] = prices[i]-prices[j];
                     break;
                }
            }
         }

        return prices;

    }
};

int main()
{
    Solution s;
    vector<int> Price ={8,4,6,2,3};
    s.finalPrices(Price);
    return 1;
}
