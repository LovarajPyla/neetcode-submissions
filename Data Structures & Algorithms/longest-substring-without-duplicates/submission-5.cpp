class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;
        unordered_map<char, int> mp;
        mp[s[0]] = 0;
        int l=0, ans=1;
        for(int r=1; r<s.size(); r++){
            if(mp.find(s[r]) != mp.end() && mp[s[r]]>=l){
                ans = max(ans, r-l);
                l=mp[s[r]]+1;
                mp[s[r]] = r;
            }else{
                mp[s[r]] = r;
                ans = max(ans, r-l+1);
            }
           
        }
       return ans;
    }
};
