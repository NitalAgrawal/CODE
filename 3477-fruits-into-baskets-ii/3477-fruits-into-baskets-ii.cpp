class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int i=0;
        int count = 0;
        while(i<fruits.size()){
            for(int j=0;j<baskets.size();j++){
                if(baskets[j] >= fruits[i]){
                    baskets[j]=0;
                    break;
                }
                else{
                    if(j==baskets.size()-1 && baskets[j] < fruits[i]){
                        count++;
                    }
                }
            }
            i++;
        }
        return count;
    }
};