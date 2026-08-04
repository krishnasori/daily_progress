class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j=0 , sum=0,len,min_len=INT_MAX;
        for(int i=0;i<nums.size();i++){
                 sum+=nums[i];
                 if(sum>=target){
                  
                    while(sum>=target){
                          len=i-j+1;
                    min_len=min(len,min_len);
                        sum-=nums[j];
                        j++;
                    }
                    
                 }
        }
        if(min_len==INT_MAX){
            return 0;
        }
        return min_len;

    }
};
