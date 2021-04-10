class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
         int n = nums.size();
        map<int,int> smap;
        int count =0;
        for(int  i =0;i<n;i++)
        {
            count+=smap[nums[i]];
            smap[nums[i]]++;
        }
        return count;


    }
};
