#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        vector<pair<int, int>> ones1, ones2;
        
        // 1. Store the coordinates of all 1s
        for (int r = 0; r < n; ++r) {
            for (int c = 0; c < n; ++c) {
                if (img1[r][c] == 1) ones1.push_back({r, c});
                if (img2[r][c] == 1) ones2.push_back({r, c});
            }
        }
        
        // 2. Count the frequencies of each unique shift vector
        unordered_map<int, int> count;
        int max_overlap = 0;
        
        for (auto& [r1, c1] : ones1) {
            for (auto& [r2, c2] : ones2) {
                int dr = r1 - r2;
                int dc = c1 - c2;
                
                // Encode the 2D offset into a unique 1D key
                // Since N <= 30, shifting by 100 avoids negative values
                int hash_key = (dr + 100) * 1000 + (dc + 100); 

                count[hash_key]++;
                max_overlap = max(max_overlap, count[hash_key]);
            }
        }
        
        return max_overlap;
    }
};