class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int highr=n-1;
        int lowr=0;
        
        while(lowr<=highr){
        
            int lowc=0;
        int highc=m-1;
             int midr=(lowr+highr)/2;
            while(lowc<=highc){
                int midc=(lowc+highc)/2;
                 if((matrix[midr][midc]==target)){
                return true;
            }
                
                else if(matrix[midr][midc]<target){
              lowc=midc+1;
            }
            else{
                highc=midc-1;
            }
            }
           
            if(matrix[midr][0]<target){
              lowr=midr+1;
            }
            else{
                highr=midr-1;
            }
        }
        
   return false; }
};
