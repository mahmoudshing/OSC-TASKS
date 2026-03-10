/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
      int n=0;
      Node* ptr=head;
      while(ptr!=NULL){
          n++;
          ptr=ptr->next;
      }
      
      if(k>n){
          return -1;
      }
      ptr=head;
      for(int i=0;i<n-k;i++){
          ptr=ptr->next;
      }
      return ptr->data;
      
    }
};