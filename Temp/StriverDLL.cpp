#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1,Node* next1,Node*prev1){
        data=data1;
        next=next1;
        prev=prev1;
    }

    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};

Node* ArrayToDLL(vector<int> &arr){
    Node* head=new Node(arr[0],nullptr,nullptr);
    Node* back=head;

    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,back);
        back->next=temp;
        back=temp;
    }
    return head;
}

Node* deleteFront(Node* head){
    Node* temp=head;
    head=head->next;
    head->prev=nullptr;
    delete temp;

    return head;
}

Node* deleteTail(Node* head){
    Node* temp=head;

    if(head->next==NULL){
        return NULL;
    }

    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=nullptr;
    delete temp->next;

    return head;
}

Node* deleteK(Node* head,int k){
    int count=0;
    Node* temp=head;

    while(temp!=NULL){
        count++;
        if(k==count){
            break;
        }
        temp=temp->next;
    }

    Node* back=temp->prev;
    Node* front=temp->next;

    if(temp->prev==NULL){
        head=deleteFront(head);
        return head;
    }

    if(temp->next==NULL){
        head=deleteTail(head);
        return head;
    }

    back->next=front;
    front->prev=back;
    delete temp;

    return head;
}

void traverse(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"nullptr"; 
}

Node* insertFront(Node* head){
    int val;
    cout<<"Enter the value";
    cin>>val;

    if(head==NULL){
        return new Node(val,nullptr,nullptr);
    }
    Node* newhead=new Node(val,head,nullptr);
    head->prev=newhead;

    return newhead;
}

Node* insertTail(Node* head){
    Node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    int val;
    cout<<"Enter the value";
    cin>>val;

    Node* newtail=new Node(val,nullptr,temp);
    temp->next=newtail;

    return head;
}

Node* insertAtK(Node* head,int k){
    Node* temp=head;
    int count=0;

    if(k==1){
        return insertFront(head);
    }

    while(temp!=NULL){
        count++;
        if(count==k){
            break;
        }
        temp=temp->next;
    }
    Node* back=temp->prev;

    int val;
    cout<<"Enter the val";
    cin>>val;
    Node* newnode=new Node(val,temp,back);
    temp->prev=newnode;
    back->next=newnode;

    return head;
}

Node* deleteVal(Node* head,int key){
    Node* temp=head;

    while(temp!=NULL){
        if(temp->data==key){
            if(temp==head){
                head=head->next;
            }
            Node* front=temp->next;
            Node* back=temp->prev;
            if(back){
                back->next=front;
            }
            if(front){
                front->prev=back;
            }
            delete temp;
        }else{
            temp=temp->next;
        }
    }
    return head;
}
int main(){
    vector<int>arr={12,34,56,78,89};
    Node* head=ArrayToDLL(arr);
    traverse(head);
    cout<<endl;

    // head=deleteFront(head);
    // traverse(head);
    // cout<<endl;
    
    // head=deleteTail(head);
    // traverse(head);
    // cout<<endl;

    // head=deleteK(head,1);
    // traverse(head);
    // cout<<endl;

    // head=insertFront(head);
    // traverse(head);
    // cout<<endl;

    // head=insertTail(head);
    // traverse(head);
    // cout<<endl;

    // head=insertAtK(head,5);
    // traverse(head);

    head=deleteVal(head,56);
    traverse(head);
    
}