class Solution {
public:
    int nextGreaterElement(int n) {
        int pivot = -1;

        string s = to_string(n);
        int size = s.size();

        for(int i = size-1; i > 0; i--){
            if(s[i] > s[i-1]){
                pivot = i-1;
                break;
            }
        }

        if(pivot == -1){
            return -1;
        }

        for(int i = size-1; i > pivot; i--){
            if(s[i] > s[pivot]){
                swap(s[i], s[pivot]);
                break;
            }
        }

        int i = pivot+1, j = size-1;
        while(i < j){
            swap(s[i++], s[j--]);
        }

        long long ans = stoll(s);

        if(ans > INT_MAX){
            return -1;
        }

        return (int)ans;
    }
};