class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low=0;
        int high = n-1;
        int mid = low;

        while(mid<=high){
            if(mid<low || (mid==low && nums[mid]==0)){
                mid++;
            }
            else if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                low++;
            }
            else if(nums[mid] == 2){
                swap(nums[mid],nums[high]);
                high--;
                
            }
            else{
                mid++;
            }
        }
        
    }
};