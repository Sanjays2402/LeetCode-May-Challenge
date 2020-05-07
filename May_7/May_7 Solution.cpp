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

#define node TreeNode
class Solution {
public:
    int l1,l2;
    node* p1;
    node* p2;
    void helper(node *root,int x,int y,int level,node* parent)
    {
        if(!root)
            return;
        if(root->val==x){
            l1 = level;
            p1 = parent;
        } 
        if(root->val==y){
             l2 = level;
             p2 = parent;
        }
        helper(root->left,x,y,level+1,root);
        helper(root->right,x,y,level+1,root);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        l1 = l2 = -1;
        helper(root,x,y,0,NULL);
        return p1!=p2 && l1==l2;
    }
};
