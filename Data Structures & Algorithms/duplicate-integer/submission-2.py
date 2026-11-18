class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        if len(nums) == 0 or len(nums) == 1:
            return False
        
        nums.sort();

        for n in range(0, len(nums) - 1):
            if nums[n + 1] == nums[n]: 
                return True
            
        return False;