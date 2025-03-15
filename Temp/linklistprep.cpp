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
    if(head==NULL || head->next->next==NULL){
        return NULL;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    return head;
}

int main(){
    // Node* y=new Node(2,nullptr);
    // cout<<y->data;
    vector<int> arr={122,4,6,8,12};
    Node* head=convertArrayToLL(arr);
    traverse(head);
    cout<<endl;
    deleteTail(head);
    traverse(head);
    /* for(int i=0;i<arr.size();i++){
        cout<<endl;
        head=deleteHead(head);
        traverse(head);
    }
    */
    // cout<<head->data;
}