class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left =0,prod=1,cnt=0;
        if(k==0){
            return cnt;
        }
        for(int i=0;i<nums.size();i++){
           
                prod*=nums[i];
            
                   
                    while(prod>=k&&left<nums.size()){
                        prod/=nums[left];
                        left++;
                    }
                   
                     
                      cnt+=i-left+1;
        }
        return cnt;
    }
};
