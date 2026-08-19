class Solution {
public:
    int F[31];

    int fib(int n) {
        
        for (int i = 0; i <= 30; i++)
            F[i] = -1;

        return solve(n);
    }

    int solve(int n) {
        if (n <= 1) return n;

        if (F[n] != -1)
            return F[n];

        F[n] = solve(n-1) + solve(n-2);

        return F[n];
    }
};