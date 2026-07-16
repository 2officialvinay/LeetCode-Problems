class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if(strs.empty())
            return "";

        int n1, n2, k, longestLength = strs[0].length();

        for(int i = 0; i < strs.size()-1; i++){
            const string &s1 = strs[i];
            const string &s2 = strs[i+1];
            n1 = s1.length();
            n2 = s2.length();

            k = 0;
            while(k < n1 && k < n2){
                if(s1[k] == s2[k]){
                    k++;
                }
                else{
                    break;
                }
            }
            longestLength = min(longestLength, k);
        }

        string s = strs[0], ans = "";
        for(int i = 0; i < longestLength; i++){
            ans.push_back(s[i]);
        }

        return ans;
    }
};