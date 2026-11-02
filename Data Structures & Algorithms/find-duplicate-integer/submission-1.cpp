class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int slowp=nums[0];
        int fastp=nums[0];
          do{
            slowp=nums[slowp];
                fastp=nums[nums[fastp]];
          }
          while(slowp!=fastp);
           int slowp2=nums[0];
           while(slowp!=slowp2){
            slowp=nums[slowp];
            slowp2=nums[slowp2];
           }
        return slowp;
    }
};
