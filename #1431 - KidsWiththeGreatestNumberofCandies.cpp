#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int high = *max_element(candies.begin(),candies.end());
        vector<bool> Ans;
        for(int i =0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies >= high )
            {
                Ans.push_back(true);
            }
            else
            {
                Ans.push_back(false);
            }
        }

    return Ans;
}

};
