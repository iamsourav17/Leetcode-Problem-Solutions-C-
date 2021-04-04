class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         set<int> s;
        int n = nums.size();
        for(int i =0;i < nums.size();i++)
        {
            s.insert(nums[i]);
        }
        if(n != s.size())
        {
            return true;
        }
        else
        return false;

    }
};
