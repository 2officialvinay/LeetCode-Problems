class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int i = 0; i < nums.size();i++){
            mp[nums[i]] = 1;
        }

        int seqSum = nums[0];
        for(int j = 1; j < nums.size(); j++){
            if(nums[j] == nums[j - 1] + 1){
                seqSum += nums[j];
            }
            else{
                break;
            }
        }

        while(mp.find(seqSum) != mp.end()) {
            seqSum++;
        }

        return seqSum;
    }
};