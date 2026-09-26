class Solution {
public:
    string capitalizeFirstLast(string s) {
        // Your code goes here
        int n = s.size();
        string temp = s;

        for(int i = 0; i < n; i++){
            if(temp[i] == ' '){continue;}
            temp[i] = toupper(temp[i]);
            while(i <n-1 && temp[i+1]!= ' '){
                i++;
            }
            temp[i] = toupper(temp[i]);
        }

        return temp;
        
    }
};
