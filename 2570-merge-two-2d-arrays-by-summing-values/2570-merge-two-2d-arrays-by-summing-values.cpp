class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& num1, vector<vector<int>>& num2) {
        vector<vector<int>> ans;
        unordered_map<int,int> mp;

        for(int i = 0; i < num1.size(); i++){
            mp[num1[i][0]] += num1[i][1];
        }

        for(int i = 0; i < num2.size(); i++){
            mp[num2[i][0]] += num2[i][1];
        }

        for(auto it:mp){
            ans.push_back({it.first, it.second});
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};