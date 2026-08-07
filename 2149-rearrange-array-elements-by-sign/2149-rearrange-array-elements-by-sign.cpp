class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        int i = 0, j = 0, k = 0;

        while(i < n && j < n){
            if(nums[i] > 0){
                ans.push_back(nums[i]);

                while(j < n){
                    if(nums[j] < 0){
                        ans.push_back(nums[j]);
                        j++;
                        break;
                    }
                    j++;
                }
            }
            i++;
        }

        return ans;
    }
};