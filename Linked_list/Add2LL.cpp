/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here
    Node* t1=num1;
    Node* t2=num2;
    Node* dummy=new Node(-1);
    Node* cur=dummy;
    int carry=0;

    while(t1!=NULL || t2!=NULL){
        int sum=carry;
        if(t1!=NULL){
            sum=sum+t1->data;
        }
        if(t2!=NULL){
            sum=sum+t2->data;
        }

        Node* newnode=new Node(sum%10);
        carry=sum/10;
        cur->next=newnode;
        cur=cur->next;
        if(t1!=NULL){
            t1=t1->next;
        }
        if(t2!=NULL){
            t2=t2->next;
        }
    }
    if(carry){
        Node* newnode=new Node(carry);
        cur->next=newnode;
    }
    return dummy->next;
}
