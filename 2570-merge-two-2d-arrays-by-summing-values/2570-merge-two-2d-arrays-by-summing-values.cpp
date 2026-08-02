class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& num1, vector<vector<int>>& num2) {
        vector<vector<int>> ans;

        int n1 = num1.size();
        int n2 = num2.size();

        int i = 0, j = 0;
        int id1, id2;

        while(i < n1 && j < n2){
            id1 = num1[i][0];
            id2 = num2[j][0];

            if(id1 == id2){
                int val = num1[i][1] + num2[j][1];
                ans.push_back({id1, val});
                i++;
                j++;
            }

            else if(id1 < id2){
                int val = num1[i][1];
                ans.push_back({id1, val});
                i++;
            }

            else{
                int val = num2[j][1];
                ans.push_back({id2, val});
                j++;
            }
        }

        while(i < n1){
            id1 = num1[i][0];
            int val = num1[i][1];
            ans.push_back({id1, val});
            i++;
        }

        while(j < n2){
            id2 = num2[j][0];
            int val = num2[j][1];
            ans.push_back({id2, val});
            j++;
        }

        return ans;
    }
};