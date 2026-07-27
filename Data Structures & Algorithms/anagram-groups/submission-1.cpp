class Solution {
public:
    bool isSame(string s, string t){
        if(s.size() != t.size()) return false;
        int n= s.size();
        vector<int> freqs(26);
        vector<int> freqt(26);
        for(int i=0; i<n; i++){
            freqs[s[i]-'a']++;
            freqt[t[i]-'a']++;
        }

        for(int i=0; i<26; i++){
            if(freqs[i] != freqt[i]){
                return false;
            }
        }
        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int n=strs.size();
        vector<bool> arr(n,false);

        for(int i=0; i<n; i++){
            if(arr[i]) continue;
            ans.push_back({});
            ans.back().push_back(strs[i]);
            for(int j=i+1; j<n; j++){
                if(!arr[j] && isSame(strs[i], strs[j])){
                    ans.back().push_back(strs[j]);
                    arr[j] = true;
                }
            }
        }
        return ans;
        
    }
};
