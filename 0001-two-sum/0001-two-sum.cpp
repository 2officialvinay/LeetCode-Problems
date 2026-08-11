class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Creation of vector of data-type pair...
        vector<pair<int,int>> arr;

        for(int i = 0; i < nums.size(); i++){
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        // Now, by applying two pointer approach...
        int i = 0;
        int j = arr.size()-1;

        while(i < j){
            int key = arr[i].first + arr[j].first;
            if(target == key){
                return {arr[i].second, arr[j].second};
            }
            else if(key < target){
                i++;
            }
            else{
                j--;
            }
        }

        return {};
    }
};