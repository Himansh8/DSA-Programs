#include<stdio.h>
#include<stdlib.h>
int key;
struct bst{
    struct bst *left;
    int data;
    struct bst *right;
}*temp,*loc,*root=NULL,*par;

//Creating a new node
struct bst *new(){
    struct bst *n;
    n=(struct bst*)malloc(sizeof(struct bst));
    return n;
}

// Searching the elements in tree
void searching(int key){
    temp=root;
    loc=NULL;
    par==NULL;
    while(temp!=NULL){
    if(temp->data==key){
        printf("\nSearch susseccesful");
        loc=temp;
    }else{
       
          if(temp->data<key){
            temp=temp->left;
            par=temp;
          }else{
            temp=temp->right;
            par=temp;
          }
        }
    }
    printf("\nSearch unsuccesful");
}

//Insertion of node in the tree
void insertion(int key){
    searching(key);
    if(par->data==key );
    
}

// Inorder traversal of tree
int inorder(struct bst *flag){
    
    if(flag!=NULL){
       inorder(flag->left);
       printf("%d\t",flag->data);
       inorder(flag->right); 
    }
} 

int main(){
    int ch;
    while(1){
        printf("\n1.To search the element");
        printf("\n2.To insert the new node in tree");
        printf("\n3.Inorder traversal");
        printf("\n4.To terminate the program");
        //printf("\n1.");
        printf("\nEnter your choice");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1:printf("Enter the key to search");
                scanf("%d",&key);
                searching(key);
            break;
        case 2:printf("Enter the val in tree");
                scanf("%d",&key);
                insertion(key);
            break;
        case 3:inorder(root);
            break;
        case 4:exit(0);
            break;
        
        default:printf("\nInvalid choice");
            break;
        }
    }
    return 0;
}