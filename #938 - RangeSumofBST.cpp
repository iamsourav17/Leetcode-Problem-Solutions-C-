#include<iostream>
#include<algorithm>

using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        if(root == NULL) return NULL;
        if(root->val >= low && root->val <= high)
        {
            sum+= root->val;
        }
        if(root->val > high)
        {
            sum += rangeSumBST(root->left,low,high);
        }
        else if(root->val < low)
        {
            sum+= rangeSumBST(root->right,low,high);
        }
        else{
            sum+= rangeSumBST(root->left,low,high) + rangeSumBST(root->right,low,high);
        }


        return sum;
    }
};
