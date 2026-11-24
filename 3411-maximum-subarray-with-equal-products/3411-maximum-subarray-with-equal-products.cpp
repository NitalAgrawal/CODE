class Solution {
public:
    int maxLength(vector<int>& nums) {
     int len =0;
     for(int i=0;i<nums.size();i++){
        float prod =nums[i];
        int g = nums[i];
        int l=nums[i];
        for(int j=i+1;j<nums.size();j++){
             prod =  prod * nums[j];
             g=gcd(g,nums[j]);
             l=lcm(l,nums[j]);

             if(prod==g*l){
                len = max(len, j-i+1);
             }
        }
     }
     return len;
    }
};