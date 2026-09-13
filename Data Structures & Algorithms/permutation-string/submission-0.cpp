class Solution {
public:
    
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        vector<int> need(26,0);
        vector<int> window(26, 0);

        for(char ch : s1){
            need[ch-'a']++;
        }

        int n = s1.size();
        for(int r=0; r<s2.size(); r++){
            window[s2[r]-'a']++;
            if(r>=n){
                window[s2[r-n]-'a']--;
            }
            if(need == window){
                return true;
            }

        }


        return false;
        
        
    }
};
