class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num <= 1) return false;  // no perfect number <= 1
        
        int sum = 1; // 1 is always a divisor
        for(int i = 2; i * i <= num; i++) {
            if(num % i == 0) {
                sum += i;
                if(i != num / i) sum += num / i; // add the paired divisor
            }
        }
        return sum == num;
    }
};
