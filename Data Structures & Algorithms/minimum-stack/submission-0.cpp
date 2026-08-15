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
        if(Min.top() == myStack.top()) {
            Min.pop();
            myStack.pop();
        }
        else {
            myStack.pop();
        }
    }
    
    int top() {
        int x;
        if(!myStack.empty()){
            x = myStack.top();
            return x;
        }
        return 0;
    }
    
    int getMin() {
        return Min.top();
    }
};
