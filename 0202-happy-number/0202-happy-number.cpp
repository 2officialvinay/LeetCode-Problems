class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, int> mp;

        while(n != 1){

            if(mp[n] > 0){
                return false;
            }

            mp[n]++;
            
            int sum = 0;
            while(n > 0){
                int digit = n%10;
                n /= 10;
                sum += pow(digit, 2);
            }
            n = sum;
        }

        return true;
    }
};