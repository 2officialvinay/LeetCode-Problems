class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = INT_MIN;
        for(int i = 0; i < accounts.size(); i++){
            int amt = 0;
            for(int j = 0; j < accounts[0].size(); j++){
                amt += accounts[i][j];
            }
            maxWealth = max(maxWealth, amt);
        }

        return maxWealth;
    }
};