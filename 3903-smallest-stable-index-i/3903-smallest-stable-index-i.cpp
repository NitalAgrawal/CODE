class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans = -1;
        int maxi = INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
           int mini = *min_element(nums.begin() + i, nums.end());
            int m= maxi-mini;
            if(m<=k){
                ans = i;
                break;
            }
        }
        return ans;
    }
};