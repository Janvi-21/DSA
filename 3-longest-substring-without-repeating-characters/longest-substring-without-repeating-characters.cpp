class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int last[256];
    for(int i=0;i<256;i++) last[i]=-1;
    int start=0, ans=0;
    for(int i=0;i<s.size();i++){
        if(last[s[i]] >= start) start = last[s[i]]+1;
        last[s[i]] = i;
        ans = max(ans, i-start+1);
    }
    return ans; // <-- This return was missing, this is the main error
}
};