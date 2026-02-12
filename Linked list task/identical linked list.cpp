class Solution {
public:
    bool areIdentical(Node *head1, Node *head2) {
      Node* p1=head1;
      Node*p2=head2;
      while(p1!=NULL){
          if(p1->data!=p2->data){
              return false;
          }
          p1=p1->next;
              p2=p2->next;
      }
      if(p2==NULL){
          return true;
      }
      else {
          return false;
      }
    }
};
