class MinStack {
public:
    stack<int> st;
    stack<int>copy;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        if(st.empty()){
            return;
        }
        st.pop();
    }
    
    int top() {
       if(st.empty()){
        return -1;
       } 
       return st.top();
    }
    
    int getMin() {
        int min=INT_MAX;
        int n = st.size();
        while(!st.empty()){
            if(st.top()<min){
                min=st.top();
            }
            copy.push(st.top());
            st.pop();
        }
        while(!copy.empty()){
            st.push(copy.top());
            copy.pop();
        }
        return min;
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