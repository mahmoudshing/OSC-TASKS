/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> displayList(Node *head) {
        vector<int>v;
       Node*ptr=head;
       while(ptr!=NULL){
           v.push_back(ptr->data);
           ptr=ptr->next;
       }
       return v;
        
    }
};