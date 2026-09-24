class Solution {
public:
    int smallestIndex(vector<int>& nums) {


        //Smallest Index With Digit Sum Equal to Index
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int x = nums[i], digitSum = 0;
            for(; x>0; x/=10){
                digitSum = digitSum + x%10;
            }
            
            if(digitSum == i) return i;

        }
        return -1;
        
    }
};