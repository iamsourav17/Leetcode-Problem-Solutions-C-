class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int n = nums.size();
        int count =0;
        int total =0;
        for(int i =0;i<n;i++)
        {
            if(nums[i] ==1)
            {
                count++;
                total = max(total,count);
            }
            else
            {
                count =0;
            }
        }
        return total;

    }
};
