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
    void func(TreeNode* node,vector<int>& temp){
        if(!node) return;
        func(node->left,temp);
        temp.push_back(node->val);
        func(node->right,temp);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> temp;
        func(root,temp);
        for(int i=0;i<temp.size()-1;i++){
            if(temp[i+1]<=temp[i]) return false;
        }
        return true;
    }
};
