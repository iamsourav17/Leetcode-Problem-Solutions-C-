#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

    vector <int> Answer;
        for(int i =0;i<n;i++)
        {
            Answer.push_back(nums[i]);
            Answer.push_back(nums[i+n]);

        }
     return Answer;

    }
};


