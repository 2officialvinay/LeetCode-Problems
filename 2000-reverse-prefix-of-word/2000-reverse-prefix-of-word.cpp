class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        int x = 0;

        for(int i = 0; i < n; i++){
            if(word[i] == ch){
                x = i;
                break;
            }
        }

        if(x == 0) return word;
        
        reverse(word.begin(), word.begin() + x + 1);
        return word;
    }
};