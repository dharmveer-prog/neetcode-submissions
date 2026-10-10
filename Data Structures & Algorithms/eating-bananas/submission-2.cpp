class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        sort(piles.rbegin(),piles.rend());
        int ul=piles[0];
        
        int ll=1;
        int tt=ul;
        while(ll<=ul){
            int mid=(ul+ll)/2;
            long long int temptt=0;
            for(int j=0;j<n;j++){
                temptt+=(piles[j]+mid-1)/mid;
            }
            if(temptt<=h){
                tt=mid;
                ul=mid-1;
            }
            else{
                ll=mid+1;
            }
        }
   return tt;}
};
