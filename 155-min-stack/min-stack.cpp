class MinStack {
public:
vector<int> st;
int siz = 0;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push_back(val);
        siz++;
    }
    
    void pop() {
        st.pop_back();
        siz--;
    }
    
    int top() {
       return st[siz-1]; 
    }
    
    int getMin() {
      int min = INT_MAX;
      for(auto i : st){
          if(i<min){
              min = i;
          }
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