class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;

        for(auto s : strs){
            vector<int> cnt(26, 0);
            for(char ch : s){
                cnt[ch - 'a']++;
            }
            string str = to_string(cnt[0]);

            for(int i=1; i<26; i++){
                str += ',' + to_string(cnt[i]);
            }
            res[str].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto pair : res){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
