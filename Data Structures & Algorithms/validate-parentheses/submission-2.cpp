class Solution {
public:
    bool isValid(string s) {
     stack <char> st;
     int n=s.size();
     bool flag=true;
     for(int i=0;i<n;i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
        }
        else{
        
            if(st.size()==0){flag=false;
            break;}
            char top=st.top();
            if((top=='(' && s[i]!=')')|| (top=='{'&& s[i]!='}')||(top=='['&&s[i]!=']')){
                flag=false;
                break;
                
            }
            else{
                st.pop();
            }




        }



     }
   
if(st.size()!=0){
    flag=false;
}
  return flag;  }
};
