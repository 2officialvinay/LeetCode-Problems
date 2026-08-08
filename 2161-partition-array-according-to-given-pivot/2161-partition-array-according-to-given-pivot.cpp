class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left, right;
        int count = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < pivot)
                left.push_back(nums[i]);

            else if(nums[i] > pivot)
                right.push_back(nums[i]);

            else
                count++;        
        }

        int i = 0;
        while(i < left.size()){
            nums[i] = left[i];
            i++;
        }

        while(count--){
            nums[i] = pivot;
            i++;
        }

        int j = 0;
        while(j < right.size()){
            nums[i] = right[j];
            i++;
            j++;
        }

        return nums;
    }
};