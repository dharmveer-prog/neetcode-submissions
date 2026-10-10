class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);
        int n=heights.size();

        int maxt=0;
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty()&&heights[st.top()]>heights[i]){
                int height=heights[st.top()];
                st.pop();
                if(!st.empty()){
                maxt=max(maxt,(height*(i-st.top()-1)));}
                else{
                    maxt=max(maxt,height*i);
                }

            }
            st.push(i);
           
        }
    return maxt;}
};
