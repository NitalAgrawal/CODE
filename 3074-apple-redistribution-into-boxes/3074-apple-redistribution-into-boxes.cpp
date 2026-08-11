class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end());
        int sum =0;
        for(int i=0;i<apple.size();i++){
          sum += apple[i];
        }
        int count =0;
        int i=capacity.size()-1;
        while(sum>0 && i>=0){
              sum = sum - capacity[i];
               count++;
              i--;
              
        }
        return count;
    }
};