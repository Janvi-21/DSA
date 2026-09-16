class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        // my solution 
        
        // if(n== 1 ||  n%2 == 0){return true;
        // }else return false;

        // upgrade : 

        return n>0 && (n & (n-1)) == 0;

        // In binary representation, powers of two have a distinctive property: - 1 = 1, 4 = 100, 2 - 10, 16 -10000....etc
        // If n is a power of two, it contain exactly one bit set to 1
        // then, if we perform n−1, it will flip the n.
        // 3 = 011, 7 = 0111
    }
};