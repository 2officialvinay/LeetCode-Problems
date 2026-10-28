class Solution {
public:
    int minimumLength(string s) {
        int i = 0, j = s.size()-1;

        while(i < j && s[i] == s[j]){
            char key = s[i];

            while(i <= j && s[i] == key){
                i++;
            }

            while(i <= j && s[j] == key){
                j--;
            }
        }

        return j-i+1;
    }
};