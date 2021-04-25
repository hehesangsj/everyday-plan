class MinStack {
private:
    stack<int> num;
    stack<int> min;   

public:
    /** initialize your data structure here. */
    MinStack() {
        min.push(INT_MAX);
    }
    
    void push(int val) {
        num.push(val);
        if (num.top() < min.top()){
            min.push(num.top());
        }
        else{
            min.push(min.top());
        }
    }
    
    void pop() {
        num.pop();
        min.pop();

    }
    
    int top() {
        return num.top();
    }
    
    int getMin() {
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
