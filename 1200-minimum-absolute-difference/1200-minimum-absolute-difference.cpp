class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
         int mindiff = INT_MAX;
        for(int i=1;i<arr.size();i++){
             
             mindiff = min(mindiff ,arr[i] - arr[i-1] );
             
        }
        if(arr.size()>1){
          
           int i=1;
               while(i<arr.size()){
                   if(arr[i]-arr[i-1] == mindiff){
                         ans.push_back({arr[i-1],arr[i]});
                         
                   }
                   
                    i++;
                   
               }
        }
        
        return ans;
    }
};