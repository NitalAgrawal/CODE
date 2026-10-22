class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int i = 0;
       
        int count = 0;
        while(i<startTime.size()){
           int n1 = startTime[i];
           int n2= endTime[i];

           if( queryTime>=n1 &&  queryTime<=n2){
            count++;
           }
           i++;
        }
        return count;
    }
};