class Solution
{
    public:
   /*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
Node* reverseDLL(Node * head)
{   
    if(head==NULL || head->next==NULL){
        return head;
    }
    
    Node* curr=head;
    Node* temp=NULL;
    
    while(curr!=NULL){
        temp=curr->prev;
        curr->prev=curr->next;
    
        curr->next=temp;
        curr=curr->prev;
    }
    return temp->prev;
    
    }
};
