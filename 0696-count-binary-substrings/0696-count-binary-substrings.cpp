class Solution {
public:
    int countBinarySubstrings(string s) {
        int prev = 0;
        int curr = 1;
        int ansCount = 0;

        for(int i = 1; i < s.size(); i++){
            if(s[i] == s[i-1]){
                curr++;
            }
            else{
                ansCount += min(prev, curr);
                prev = curr;
                curr = 1;
            }
        }

        ansCount += min(prev, curr);

        return ansCount;
    }
};