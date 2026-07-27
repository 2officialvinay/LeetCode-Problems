class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();

        if(n == 1) return 1;

        vector<int> count(n, 1);

        // Left to right pass...
        for(int i = 0; i < n-1; i++){
            if(ratings[i+1] > ratings[i]){
                count[i+1] = count[i] + 1;
            }
        }

        // Right to left pass...
        for(int i = n-1; i > 0; i--){
            if((ratings[i-1] > ratings[i]) && count[i-1] <= count[i]){
                count[i - 1] = count[i] + 1;
            }
        }

        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += count[i];
        }

        return sum;
    }
};