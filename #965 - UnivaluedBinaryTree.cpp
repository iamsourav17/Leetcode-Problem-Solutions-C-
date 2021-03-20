class Solution {
public:
     static bool helper(TreeNode* root,int val){
        if(root==NULL){
            return true;
        }
        if(root->val!=val){
            return false;
        }
        return helper(root->left,val) && helper(root->right,val);
    }
    bool isUnivalTree(TreeNode* root) {
        if(root == nullptr) return true;
        int val =root->val;
        return helper(root->left,val) && helper(root->right,val);

    }
};
