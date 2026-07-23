class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k = k%n;
        reverse(nums.begin(), nums.end());

        int left = 0, right = k-1;
        while(left < right){
            swap(nums[left++], nums[right--]);
        }

        left = k, right = n-1;
        while(left < right){
            swap(nums[left++], nums[right--]);
        }
    }
};