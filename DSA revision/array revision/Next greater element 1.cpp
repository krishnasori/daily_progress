class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        vector<int>ans;
        stack<int>st;
        unordered_map<int,int>mp;
        for(int i=0;i<m;i++)
        {
            while(!st.empty() && st.top()<nums2[i]) {
                mp[st.top()]=nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        for(int num:nums1){
            if(mp.count(num)){
                ans.push_back(mp[num]);
            }
            else{
            ans.push_back(-1);
        }
        }
        return ans;
    }
};
