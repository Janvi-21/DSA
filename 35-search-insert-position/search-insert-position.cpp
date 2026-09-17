class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        // start by taking a number with 0 
        // binary search 
        
        int st = 0;
        int end = nums.size() - 1;

        while(st <= end){
            int mid = (st+end)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid]<target) st = mid+1;
            if(nums[mid]>target) end = mid-1;
        }

        return st;
    }
};