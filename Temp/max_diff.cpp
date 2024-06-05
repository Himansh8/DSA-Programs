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

    void solve(TreeNode* root,TreeNode* temp,int &store){
        if(root == NULL){
            return;
        }

        solve(root->left,temp,store);
        int flag=0;
        flag=abs((temp->val)-(root->val));
        store=max(store,flag);
        solve(root->right,temp,store);
    }

public:
    int maxAncestorDiff(TreeNode* root) {
        queue<TreeNode*>q;
        int ans=0;
        q.push(root);

        while(!q.empty()){
            int size=q.size();
            int store=INT_MIN;

            for(int i=0;i<size;i++){
                TreeNode* front=q.front();
                q.pop();
                if(root->left){
                    q.push(root->left);
                }
                if(root->right){
                    q.push(root->right);
                }
                solve(front,front,store);

                ans=max(store,ans);
            }
        }
        return ans;
    }
};