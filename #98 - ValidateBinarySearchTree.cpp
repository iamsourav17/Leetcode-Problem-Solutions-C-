
  class Solution {
public:
    bool helper(TreeNode* root , long long minV = -10000000000,long long maxV = 10000000000)
    {
        if(root == NULL) return true;
        bool left = helper(root->left,minV,root->val);
        bool right = helper(root->right,root->data,maxV);

        if(left && right && root>val < maxV && root->val >minV)
        {
            return true;
        }
        else{
            return false;
        }
    }
    bool isValidBST(TreeNode* root) {
        return helper(root);

    }
};
