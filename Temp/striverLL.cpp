#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};


Node* convertArrayToLL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;

    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void traverse(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"nullptr";
}

Node* deleteHead(Node* head){
    if(head==NULL){
        return head;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}

Node* deletepostion(Node* head,int k){
    if(head==NULL){
        return head;
    }
    if(k==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int count=0;
    Node* temp=head;
    Node* prev=nullptr;
    while(temp!=NULL){
        count++;
        if(count==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node* Addfront(Node* head){
    
    int val;
    cout<<"Enter the value";
    cin>>val;
    Node* temp=new Node(val);
    temp->next=head;

    return temp;
}

Node* AddTail(Node* head){
    int val;
    cout<<"Enter the value";
    cin>>val;

    Node* temp1=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }

    Node* temp2=new Node(val,nullptr);
    temp1->next=temp2;
    return head;
}

Node* AddAtPostion(Node* head,int k,int val){
    if(head==NULL){
        return new Node(val,nullptr);
    }

    if(k==1){
        return new Node(val,head);
    }
    
    int count=0;
    Node* temp1=head;
    while(temp1!=NULL){
        count++;
        if(count==k-1){
            Node* x=new Node(val);
            x->next=temp1->next;
            temp1->next=x;
            break;
        }
        temp1=temp1->next;
    }
    return head;
    
}

int main(){
    // Node* y=new Node(2,nullptr);
    // cout<<y->data;
    vector<int> arr={122,4,6,8,12};
    Node* head=convertArrayToLL(arr);
    traverse(head);


    // cout<<endl;
    // head=Addfront(head);
    // traverse(head);

    cout<<endl;
    head=AddAtPostion(head,7,56);
    traverse(head);

    // cout<<endl;
    // head=AddTail(head);
    // traverse(head);


    // head=deletepostion(head,5);
    // cout<<endl;
    // traverse(head);

    // deleteTail(head);
    // traverse(head);

    /* for(int i=0;i<arr.size();i++){
        cout<<endl;
        head=deleteHead(head);
        traverse(head);
    }
    */
    // cout<<head->data;
}