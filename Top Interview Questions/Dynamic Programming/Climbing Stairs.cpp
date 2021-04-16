// Climbing Stairs

class Solution {
public:
    int climbStairs(int n) 
    {
        double root5 = sqrt(5);
        return (1 / root5) * (pow((1 + root5) / 2, n + 1) - pow((1 - root5) / 2, n + 1));
    }
};
