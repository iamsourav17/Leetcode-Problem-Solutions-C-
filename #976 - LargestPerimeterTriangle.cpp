class Solution {
public:
    int largestPerimeter(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int total =0; int result  = 0;
        for(int i =0;i<nums.size()-2;i++)
        {
            if(nums[i] + nums[i+1] > nums[i+2])
            {
                result = nums[i] +nums[i+1]+nums[i+2];
                total = max(total,result);
            }
        }
        return total;

    }
};
