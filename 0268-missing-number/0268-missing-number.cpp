class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int sumArray = 0, naturalSum = 0;
        for(int i = 0; i < n; i++){
            sumArray += nums[i];
            naturalSum += i;
        }

        naturalSum += n;

        return (naturalSum - sumArray);
    }
};