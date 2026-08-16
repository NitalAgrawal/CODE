class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       set<int> answer1;
        set<int> answer2;
        for(int i=0;i<nums1.size();i++){
            if(find(nums2.begin(),nums2.end(),nums1[i])!=nums2.end()){
                 
                 continue;
            }
            else{
                answer1.insert(nums1[i]);
            }
        }

         for(int i=0;i<nums2.size();i++){
            if(find(nums1.begin(),nums1.end(),nums2[i])!=nums1.end()){
                 
                 continue;
            }
            else{
                answer2.insert(nums2[i]);
            }
        }

        vector<vector<int>> ans ;
        ans.push_back(vector<int>( answer1.begin(),  answer1.end()));
        ans.push_back(vector<int>(answer2.begin(), answer2.end()));
        
        return ans;
    }
};