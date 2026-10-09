class Solution {
public:
    long long minimumSteps(string s) {
        long long black = 0, swaps = 0;

        for(auto ch : s){
            if(ch == '1')
                black++;
            else{
                swaps += black;
            }
        }

        return swaps;
    }
};