class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        for(int num:nums){
            ans.push_back(num);
        }
        for(int i=0;i<n;i++){
            nums[(i+k)%n]=ans[i];
        }
    }
};
