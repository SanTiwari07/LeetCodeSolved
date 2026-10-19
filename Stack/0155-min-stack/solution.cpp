class MinStack {
    stack<int> sample;
    stack<int> minimum;
public:
    MinStack() {
        
    }
    
    void push(int value) {
       sample.push(value);
       if (minimum.empty() || value <= minimum.top()) minimum.push(value);
    }
    
    void pop() {
        if (sample.top() == minimum.top())
            minimum.pop();

        sample.pop();
    }
    
    int top() {
        return sample.top();
    }
    
    int getMin() {
        return minimum.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
