class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int ll=0;
        int ul=n-1;
        int mint=nums[0];
        while(ll<=ul){
        int mid=(ul+ll)/2;
     mint=min(mint, nums[mid]);
        if(nums[mid]>nums[ul]){
            ll=mid+1;
        }
        else{
ul=mid-1;
        }
        }
return mint;}
};
