class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> ans;

        while(ss >> word){
            ans.push_back(word);
        }

        reverse(ans.begin(), ans.end());
        s.clear();

        s = "";

        for(int i = 0; i < ans.size(); i++){
            if(s.empty()){
                s += ans[i];
            }
            else{
                s += " " + ans[i];
            }
        }

        return s;
    }
};