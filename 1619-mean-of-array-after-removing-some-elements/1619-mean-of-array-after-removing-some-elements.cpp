class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int num = (n*5)/100;
      int count=0;
      int sum=0;
      for(int i=num;i<n-num;i++){
           count++;
           sum += arr[i];
      }
    double mean = double(sum)/double(count);
    return mean;
    }
};