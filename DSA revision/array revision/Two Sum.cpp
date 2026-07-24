class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int>ans;
      unordered_map<int,int>mp;
      for(int i=0;i<nums.size();i++){
           mp[nums[i]]=i;
      }
      for(int i=0;i<nums.size();i++){
        if(mp.find(target-nums[i])!=mp.end() ){
            if(i!=mp.find(target-nums[i])->second){
ans.push_back(i);
            ans.push_back(mp.find(target-nums[i])->second);
            break;

            }
            
        }
      }
      return ans;
    }
};
