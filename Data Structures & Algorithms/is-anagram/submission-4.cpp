class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        
        vector<char> freqs(26);
        vector<char> freqt(26);
        for(int i=0; i<s.size(); i++){
            freqs[s[i] - 'a']++;
            freqt[t[i] - 'a']++;
        }
        for(int i=0; i<26; i++){
            if(freqs[i] != freqt[i]) return false;
        }
        return true;
    }
};
