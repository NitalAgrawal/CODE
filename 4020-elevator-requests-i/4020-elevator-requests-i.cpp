class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int fl = 0;
        int sum =0;
        for(int i=0;i<requests.size();i++){
            sum += abs(fl-requests[i]);
            fl = requests[i];
        }
        return sum;
    }
};