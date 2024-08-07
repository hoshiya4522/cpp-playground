// https://leetcode.com/problems/four-divisors/

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        vector<int> toBeSummed;
        int sum = 0;
        for (int n : nums) {
            vector<int> divisors;
            for (int j = 1; j <= sqrt(n); j++) {
                if (n % j == 0) {
                    divisors.push_back(j);
                    if (j != n / j)
                        divisors.push_back(n / j);
                }
            }
            if (divisors.size() == 4) {
                for (int j : divisors)
                    toBeSummed.push_back(j);
            }
        }

        if (toBeSummed.size() != 0)
            for (int x : toBeSummed)
                sum += x;

        return sum;
    }
};
