class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<double,double>> time(n);
        for(int i=0;i<n;i++){
            // position[i]=abs(target-position[i]);
        time[i]={position[i],static_cast<double>(target-position[i])/speed[i]};
        }
       
         sort(time.rbegin(),time.rend());
      
        int count=0;
        for(int i=0;i<n;i++){
        if(i==0||(time[i].second!=time[i-1].second && time[i].second>time[i-1].second)){
            count++;
        }
        else{
            time[i].second=time[i-1].second;
        }
            
        }

  return count;  }
};
