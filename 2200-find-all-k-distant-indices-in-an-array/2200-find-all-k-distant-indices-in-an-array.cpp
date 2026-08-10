class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<int> ans;

        for(int i = 0; i < n; i++){
            int j1 = i, j2 = i;

            while(abs(i-j1) <= k && abs(i-j2) <= k){
                if(nums[j1] == key || nums[j2] == key){
                    ans.push_back(i);
                    break;
                }
                else{
                    if(j1 > 0){
                        j1--;
                    }
                    if(j2 < n-1){
                        j2++;
                    }
                }
            }
        }

        return ans;
    }
};