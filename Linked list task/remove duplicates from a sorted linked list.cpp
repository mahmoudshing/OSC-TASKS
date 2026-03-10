/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        if (head == NULL) return head;
        set<int> s;  
        Node* ptr = head;
        while (ptr != NULL) {
            s.insert(ptr->data);
            ptr = ptr->next;
        }
        ptr = head;
        set<int>::iterator it;
        for (it = s.begin(); it != s.end(); ++it) {
            ptr->data = *it;
            ptr = ptr->next;
        }
        Node* toDelete = ptr;
        Node* prev = NULL;
        Node* temp = head;
        for (int i = 0; i < s.size() - 1; ++i) {
            temp = temp->next;
        }
                prev = temp;
    prev->next = NULL;
    while (toDelete != NULL) {
                    Node* nextNode = toDelete->next;
            delete toDelete;
            toDelete = nextNode;
        }

        return head;
    }
};
