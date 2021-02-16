
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int index = 0;
       int length = nums.size();
       while(index < length)
       {

       if(nums[index] == val)
       {
           nums[index] = nums[length - 1];
           length--;
       }
       else{
        index++;
       }
       }
       return length;
    }
};
