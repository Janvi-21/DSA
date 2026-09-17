class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0 ;
        bool couting = false;

        for(int i = s.length()-1; i >= 0; i--){
            if(s[i] != ' '){
                couting = true;
                length++;
            }else if(couting){
                break;
            }
        }
        return length;
    }
};