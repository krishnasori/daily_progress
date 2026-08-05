class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int cnt=0,j=0,len,max_len=INT_MIN;
           for(int i=0;i<nums.size();i++){
                 if(nums[i]==0){
                    cnt++;
                 }
                 while(cnt>k){
                    if(nums[j]==0){
                        cnt--;
                        len--;
                    }
                    j++;
                 }
                 int len=i-j+1;
                 max_len=max(max_len,len);
           }
           return max_len;
        
    }
};
