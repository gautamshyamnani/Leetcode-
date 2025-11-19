class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;

        int a = 1;  // ways to climb 1 step
        int b = 2;  // ways to climb 2 steps

        for (int i = 3; i <= n; i++) {
            int c = a + b;  // ways for current step
            a = b;
            b = c;
        }

        return b;  // final result
    }
};
