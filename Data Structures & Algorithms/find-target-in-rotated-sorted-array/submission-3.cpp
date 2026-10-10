class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int ll=0;
        int ul=n-1;
        if(nums[ll]==target){
            return ll;
        }
        else if(nums[ul]==target){
            return ul;
        }
        while(ll<=ul){
            int mid=(ul+ll)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]<nums[ul]&&nums[mid]<target&&target<=nums[ul]){
                ll=mid+1;
            }
            else if(nums[mid]>nums[ul]&&(nums[mid]<target||target<nums[ll])){
                ll=mid+1;
            }
            else{
                ul=mid-1;
            }
        }
   return -1; }
};
