class Solution {
public:
    int factors(int n){
        int count = 0;
        if(n<=0) return 0;
        for(int i = 1; i*i <= n; i++){
         if(n%i == 0){
                count++;
                if(n/i != i) count++;
            }
            }
            return count;
    }
    int primeUptoN(int n) {
        int primes = 0;
        for(int i = 0; i<= n; i++){
            int fac = factors(i);
            if(fac == 2) primes++;
        }
        return primes;
    }
};