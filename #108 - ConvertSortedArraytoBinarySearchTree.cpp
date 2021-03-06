
class Solution {
public:
    TreeNode* helper(vector<int> arr,int s,int e)
    {
        if(s>e) return NULL;

        int mid = (s+e)/2;
        int rootdata = arr[mid];
        TreeNode *root = new TreeNode(rootdata);
        root->left= helper(arr,s,mid-1);
        root->right= helper(arr,mid+1,e);
        return root;

    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {

        int n = nums.size();
        return helper(nums,0,n-1);
    }
};
