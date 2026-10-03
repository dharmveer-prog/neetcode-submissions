class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
      stack<int> st;
        int count=0;
        // int r=1;
    //  st.push(temperatures[0]);
    vector<int> output(n,0);
   for(int i=0;i<n;i++){
    while(!st.empty()&&temperatures[i]>temperatures[st.top()]){
       int prev=st.top();
       st.pop();
       output[prev]=i-prev;
    }
    st.push(i);
   }
  return output;  }
};
