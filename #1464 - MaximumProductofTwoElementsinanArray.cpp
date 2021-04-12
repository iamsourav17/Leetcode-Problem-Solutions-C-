class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int num = nums.size();
        return (nums[num-1] - 1) * (nums[num -2]-1);

    }
};
