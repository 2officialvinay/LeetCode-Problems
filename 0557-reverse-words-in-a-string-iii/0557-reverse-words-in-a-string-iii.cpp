class Solution {
public:
    string reverseWords(string s) {
        for(int i = 0; i < s.size(); i++){
            if(i == 0){
                int temp = i;
                
                while(temp < s.size() && s[temp] != ' '){
                    temp++;
                }

                int left = i, right = temp-1;
                while(left < right){
                    swap(s[left], s[right]);
                    left++;
                    right--;
                }
            }

            if(s[i] == ' '){
                int temp = i+1;

                while(temp < s.size() && s[temp] != ' '){
                    temp++;
                }

                int left = i+1, right = temp-1;
                while(left < right){
                    swap(s[left], s[right]);
                    left++;
                    right--;
                }
            }
        }

        return s;
    }
};