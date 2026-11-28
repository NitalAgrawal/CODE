class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;

        for(int i=0;i<nums.size();i++){
            if(i%2 == 0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }

        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(), greater<int>());
   int k=0;
   int l=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(i%2 == 0){
                ans.push_back(even[k]);
                k++;
            }
            else{
                ans.push_back(odd[l]);
                l++;
            }
        }
        return ans;
    }
};