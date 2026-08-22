class Solution {
public:
    bool checkDivisibility(int n) {
        int digitSum = 0;
        int product = 1;
        int temp = n;

        while(temp > 0){
            int digit = temp%10;
            digitSum += digit;
            product *= digit;
            temp /= 10;
        }

        int sum = digitSum + product;

        if(n % sum == 0){
            return true;
        }

        return false;
    }
};