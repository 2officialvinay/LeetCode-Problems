class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());

        int left = 0;
        int right = nums.size()-1;
        int i = nums.size()-1;

        while(left <= right){
            int l = nums[left]*nums[left], r = nums[right]*nums[right];
            if(l < r){
                ans[i] = r;
                right--;
                i--;
            }
            else{
                ans[i] = l;
                left++;
                i--;
            }
        }

        return ans;
    }
};