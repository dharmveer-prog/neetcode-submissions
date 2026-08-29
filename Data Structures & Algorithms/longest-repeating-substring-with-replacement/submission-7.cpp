class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
int ans=0;
int left=0;
int max_freq=0;
vector<int> v(26,0);
for(int i=0;i<n;i++){
 v[s[i]-'A']++;
  max_freq=max(max_freq,v[s[i]-'A']);

 if((i-left+1)>(max_freq+k)){

v[s[left]-'A']--;

left++;
 }
// ans=max(ans,i-left+1);

}

ans=n-left;



  return ans;  }
};
