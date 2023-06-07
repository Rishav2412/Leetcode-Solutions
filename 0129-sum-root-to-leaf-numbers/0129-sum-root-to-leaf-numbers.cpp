class Solution {
public:
    void solve(TreeNode* root,string &s,int &ans){
        if(root && !root->left && !root->right)
        {
            s+=to_string(root->val);
            ans+=stoi(s);
            s.pop_back();
        }
        if(root){
            s+=to_string(root->val);
            solve(root->left,s,ans);
            solve(root->right,s,ans);
            s.pop_back();
        }
    }
    int sumNumbers(TreeNode* root) {
        string s="";
        int ans=0;
        solve(root,s,ans);
        return ans;
    }
};