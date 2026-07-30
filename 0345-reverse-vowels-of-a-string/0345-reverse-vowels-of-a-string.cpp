class Solution {
public:
    bool isVowel(char ch){
        if(ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch =='A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            return true;

        return false;
    }

    string reverseVowels(string s) {
        int start = 0;
        int end = s.length()-1;

        while(start < end){
            bool leftVowel = isVowel(s[start]);
            bool rightVowel = isVowel(s[end]);

            if(leftVowel && rightVowel){
                swap(s[start], s[end]);
                start++;
                end--;
            }
            else if(leftVowel && !rightVowel){
                end--;
            }
            else if(!leftVowel && rightVowel){
                start++;
            }
            else{
                start++;
                end--;
            }
        }

        return s;
    }
};