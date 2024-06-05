#include<iostream>
#include<queue>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};

void pre_order(node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    pre_order(root->left);
    pre_order(root->right);

}
void in_order(node* root){
    if(root==NULL){
        return;
    }

    in_order(root->left);
    cout<<root->data<<" ";
    in_order(root->right);

}


void post_order(node* root){
    if(root==NULL){
        return;
    }

    post_order(root->left);
    post_order(root->right);
    cout<<root->data<<" ";

}

// void level_order(node *root){
//     queue<node*>q;
//     q.push(root);
        
//     while(!q.empty()){
//         int s=q.size();
//         for(int i=0;i<s;i++){
//             node* temp=q.front();
//             q.pop();
//             if(temp->left) q.push(temp->left);
//             if(temp->right) q.push(temp->right);
//             cout<<temp->data<<" ";
//         }
//         cout<<" ";
//     }
// }


void level_order(node *root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

node* build(node* root){
    cout<<"Enter the node value"<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;
    }
    cout<<"Enter the  value in left of  "<<data<<endl;
    root->left=build(root->left);
    cout<<"Enter the value in right of  "<<data<<endl;
    root->right=build(root->right);
    return root;
}

void build_level_order(node* &root){
    queue<node*>q;
    cout<<"Enter the data in root"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        cout<<"Enter the left node for"<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata!=-1){
            temp->left= new node(leftdata);
            q.push(temp->left);
        }

         cout<<"Enter the right node for"<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata!=-1){
            temp->right= new node(rightdata);
            q.push(temp->right);
        }
    }
}

int main(){
    node* root=NULL;
    // root=build(root);
    build_level_order(root);
    // root=build_level_order(root);
    //5,4,3,-1,-1,2,-1,-1,6,7,-1,-1,8,-1,-1
    cout<<"Level order traversal is"<<endl;
    level_order(root);
    cout<<endl;
    cout<<"Preorder traversal is"<<endl;
    pre_order(root);
    cout<<endl;
    cout<<"Inorder traversal is"<<endl;
    in_order(root);
    cout<<endl;
    cout<<"Postorder traversal is"<<endl;
    post_order(root);
}
