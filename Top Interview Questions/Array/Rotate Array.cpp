// Rotate Array

class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        if (nums.empty()) 
            return;
        int n = nums.size(), start = 0;   
        while (n && (k %= n)) 
        {
            for (int i = 0; i < k; ++i) 
            {
                swap(nums[i + start], nums[n - k + i + start]);
            }
            n -= k;
            start += k;
        }
    }
};
