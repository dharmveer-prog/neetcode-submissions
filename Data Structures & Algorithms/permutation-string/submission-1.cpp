class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       vector<int> str(26,0);
       vector<int> window(26,0);
       int n1=s1.length();
       int n2=s2.length();
       if(n1>n2) return false;
       for(int i=0;i<n1;i++){
        str[s1[i]-'a']++;
        window[s2[i]-'a']++;
       }
       int left=0;
       if(str==window) return true;
       for(int i=n1;i<n2;i++){
        window[s2[i]-'a']++;
        window[s2[left]-'a']--;
        left++;
        if(window==str)return true;
       }
  return false;  }
};
