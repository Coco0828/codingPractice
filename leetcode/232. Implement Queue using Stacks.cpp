class MyQueue {
public:
    stack<int> a;
    stack<int> temp;
    MyQueue() {
        
    }
    
    void push(int x) {
        a.push(x);
    }
    
    int pop() {
        if(temp.empty()){
            while(!a.empty()){
                temp.push(a.top());
                a.pop();
            }
        }
        
        int top = temp.top();
        temp.pop();
        return top;
    }
    
    int peek() {
        if(temp.empty()){
            while(!a.empty()){
                temp.push(a.top());
                a.pop();
            }
        }
        
        return temp.top();
    }
    
    bool empty() {
        return a.empty() && temp.empty();
    }
};
