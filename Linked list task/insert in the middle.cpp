/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to insert a node in the middle of the linked list.
class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        if (head == NULL) {
    return new Node(x);
}
      int size =0;
      Node * ptr=head;
      while(ptr!=NULL){
          size++;
          ptr=ptr->next;
      }
       int mid;
       if(size%2==0){
           mid=size/2-1;
       }
       else {
           mid=((size+1)/2)-1;
       }
        ptr=head;
        for(int i=0;i<mid;i++){
            ptr=ptr->next;
        }
        Node*newnode=new Node(x);
        newnode->next=ptr->next;
        ptr->next=newnode;
        return head;
    }
};