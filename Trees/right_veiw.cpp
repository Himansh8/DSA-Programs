// LOOP TRAVERSAL METHODE

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
         if(root==NULL)
            return ans;
        queue<TreeNode*>q;
        q.push(root);

        
        while(!q.empty()){
            int s=q.size();
            vector<int>v;
            for(int i=0;i<s;i++){
                TreeNode* temp=q.front();
                q.pop();
                
                if(temp->left)
                    q.push(temp->left);
                    
                if(temp->right)
                    q.push(temp->right);
                
                v.push_back(temp->val);
            }
            ans.push_back(v[v.size()-1]);
            
        }
        return ans;
    }
};


//  RECURSION METHODE

class Solution {
    void solve(TreeNode* root,vector<int> &hold,int level){
        if(root==NULL){
            return;
        }

        if(level==hold.size()){
            hold.push_back(root->val);
        }

        solve(root->right,hold,level+1);
        solve(root->left,hold,level+1);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        
        solve(root,ans,0);

        return ans;
    }
};

