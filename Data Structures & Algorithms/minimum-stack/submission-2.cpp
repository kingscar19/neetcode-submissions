class MinStack {
private:
    std::stack<int> myStack;
    std::stack<int>Min;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        myStack.push(val);

        if(Min.empty() || Min.top() >= val) {
            Min.push(val);
        }
    }
    
    void pop() {
        if(myStack.empty()) {
           return;
        }
        if(Min.top() == myStack.top()) {
            Min.pop();
        }
        myStack.pop();
    }
    
    int top() {
        if(myStack.empty()) return -1;
        return myStack.top();
    }
    
    int getMin() {
        if (Min.empty()) return -1; 
        return Min.top();
    }
};
