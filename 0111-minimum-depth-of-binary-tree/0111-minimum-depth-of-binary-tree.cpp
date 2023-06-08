class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;

        int left = minDepth(root->left);
        int right = minDepth(root->right);

        if(left==0 || right==0){
            return (1 + left + right);
        }
        else{
            return 1 + min(left,right);
        }
    }
};