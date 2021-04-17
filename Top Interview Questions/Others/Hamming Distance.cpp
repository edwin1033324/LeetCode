// Hamming Distance

class Solution {
public:
    int hammingDistance(int x, int y) {
        int nums = 0;
        for (int i = 0; i < 32; i++)
        {
            if ((x & 1) ^ (y & 1))
                nums++;
            x = x >> 1;
            y = y >> 1;
        }
        return nums;
    }
};
