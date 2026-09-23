class Solution {
public:
    bool isConsecutive(vector<int>& nums) {
        // Your code goes here
        int n = nums.size();
        int min = nums[0];
        int max = nums[0];
        int sum = nums[0];

        // to get the minimum and maximum

        for(int i = 1; i <n ; i++){
            sum += nums[i];
            if(nums[i] < min ) min = nums[i];
            if(nums[i] > max) max= nums[i];
        }

        // to calcute the sum of the range from min -> to n-1
        int s = 0;

        for( int i = min; i <= max; i++){
            s+=i;
        }

        // to whether they are equal or not!!

        if(s == sum) return true;
        return false;

    }
};