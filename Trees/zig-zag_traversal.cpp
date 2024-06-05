class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	queue<Node*>q;
    	vector<int>result;
    	bool flag=true;
    	q.push(root);
    	
    	while(!q.empty()){
    	    int size=q.size();
    	    vector<int>ans(size);
    
    	    for(int i=0;i<size;i++){
    	        Node* temp=q.front();
    	        q.pop();
    	        
    	        int index=flag?i:size-i-1;
    	        ans[index]=temp->data;
    	        
    	        if(temp->left){
    	            q.push(temp->left);
    	        }
    	        if(temp->right){
    	            q.push(temp->right);
    	        }
    	        
    	    }
    	    flag=!flag;
    	    
    	    for(auto i: ans){
    	        result.push_back(i);
    	    }
    	    
    	}
    	return result;
    }
};