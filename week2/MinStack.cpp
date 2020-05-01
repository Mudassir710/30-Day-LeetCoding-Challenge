/*
Mohammed Mudassir Mohiuddin
*/

class MinStack {
public:
    /** initialize your data structure here. */
    int m_top = -1;
    int m_arr[10000]; 
    int m_min = INT_MAX;
    
    MinStack() {
        
    }
    
    void push(int x) {
        m_arr[++m_top] = x;
        if( x < m_min) m_min = x;
    }
    
    void pop() {
       if(m_min == m_arr[m_top]){
           m_min = m_arr[0];
           for(int i=1; i<m_top; i++) if(m_min > m_arr[i]) m_min = m_arr[i];
       } 
        --m_top;
        if(m_top == -1) m_min = INT_MAX;
    }
    
    int top() {
        return m_arr[m_top];
    }
    
    int getMin() {
        return m_min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */