class myQueue {
  public:
   queue <int> q;
  int capacity;
    myQueue(int n) {
      capacity=n;
    }

    bool isEmpty() {
        if(q.empty()){
            return true;
        }
        else 
        return false;
    }
    
    bool isFull() {
        if(q.size()==capacity){
            return true;
        }
        else 
        return false;
    }
    void enqueue(int x) {
        if((!isFull()))
        q.push(x);
    }
    void dequeue() {
        if(!isEmpty())
        q.pop();
    }

    int getFront() {
        if(isEmpty()){
            return -1;
        }
        return q.front();
    }
    int getRear() {
         if(isEmpty()){
           return -1;
       }
       return q.back();
       
    }
};
