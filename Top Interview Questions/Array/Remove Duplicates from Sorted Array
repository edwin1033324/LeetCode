  
//Remove Duplicates from Sorted Array 

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int count = 0;
        int originSize = nums.size();
        for(int i = 1; i < originSize; ++i)
        {
            if(nums[i] == nums[i-1])
            {
                count++;
            }
            nums[i-count] = nums[i];
        }
        return originSize - count;
    }
};
