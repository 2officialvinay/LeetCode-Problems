class Solution {
public:
    double myPow(double x, int n) {

        long long power = n;
        double ans = 1;
        
        if(power < 0){    // Handling negative powers...
            power = -power;
            x = 1/x;
        }

        while(power > 0){
            if(power & 1){  // Checking odd exponenet
                ans *= x;
            }
            
            x *= x;
            power >>= 1;  // Divided by 2
        }

        return ans;
    }
};