/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void r(TreeNode* root, int low, int high,int & res){
    if(root==NULL){return;}
    if(root->val>=low && root->val<=high){
        res+=root->val;
    }
    r(root->left,low,high,res);
    r(root->right,low,high,res);


}
    int rangeSumBST(TreeNode* root, int low, int high) {
        int res=0;
        r(root,low,high,res);
        return res;
    }
};