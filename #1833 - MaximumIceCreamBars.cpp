class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
         int total = coins;
        int count =0;
        sort(costs.begin(),costs.end());
        for(int i =0;i<costs.size();i++)
        {
            if(total - costs[i] >= 0)
            {
                count ++;
                total = total - costs[i];
            }

        }
        return count;
    }
};
