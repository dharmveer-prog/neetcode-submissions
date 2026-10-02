class Solution {
public:
    string minWindow(string s, string t) {
           int m=s.length();
        int n=t.length();
        int left =0;
        int count=0;
        int ans=1e8;
        int start_idx=0;
     vector<int> v(256,0);
     for(int i=0;i<n;i++){
        v[t[i]]++;
     }


        for(int i=0;i<m;i++){
            
            if(v[s[i]]>0){
                count++;
            }
            v[s[i]]--;
            while(count>=n){
                if(ans>(i-left+1)){
                ans=(i-left+1);
                start_idx=left;
                }
                
                v[s[left]]++;
                if(v[s[left]]>0){
                    count--;
                }
                left++;
            
            }
            
        }
     
    if(ans == 1e8) return "";
    else{
        return s.substr(start_idx,ans);
    }   
    }
};