class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int count = 0, n = arr.size(), j = 1;
        
        for(int i = 0; i < n; i++){
            while(j < arr[i]){
                count++;
                if(count == k) return j;
                j++;
            }

            j = arr[i]+1;
        }

        while(count < k){
            count++;
            if(count == k) return j;
            j++;
        }

        return -1;
    }
};