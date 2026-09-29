class Solution {
public:
    bool isPerfect(int n) {
        vector<int> arr;

        if(n<= 0) return false;
        if(n >0){
        for(int i = 1; i*i <= n; i++){

            if(n%i == 0){
                arr.push_back(i);
                if(n/i != i) arr.push_back(n/i);
            }
        }
        }
        sort(arr.begin(), arr.end());
        arr.pop_back();
        int sum = 0;
        for(int no : arr){
            sum += no;
        }

        if(sum == n) return true;
        else return false;
    }
};