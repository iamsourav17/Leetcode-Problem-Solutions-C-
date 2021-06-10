class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int answer = 0;
        if(n ==1)
        return 0;
        else
        {
            for(int i =1; i < n ;i++)
            {
                if(nums[i] > nums[i-1])
                continue;
                else
                {
                    answer += nums[i-1] + 1 - nums[i];
                    nums[i] = nums[i-1] + 1;
                }
            }
        }
        return answer;

    }
};
