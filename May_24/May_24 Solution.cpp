class Solution {
public:
    TreeNode * bstFromPreorder(vector <int> &preorder, int i, int j){
        if(i > j) return NULL;
        int root_val = preorder[i];
        int k;
        for(k = i; k <= j; k++){
            if(preorder[k] > root_val){
                break;
            }
        }
        TreeNode *root_left = bstFromPreorder(preorder,i+1,k-1);
        TreeNode *root_right = bstFromPreorder(preorder,k,j);
        TreeNode * root = (struct TreeNode *) malloc(sizeof(struct TreeNode));
        root->left = root_left;
        root->right = root_right;
        root->val = root_val;
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return bstFromPreorder(preorder,0,preorder.size()-1);
    }
};
