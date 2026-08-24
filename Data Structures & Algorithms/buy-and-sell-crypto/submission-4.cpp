class Solution {
public:
    int maxProfit(vector<int>& p) {
        int ans =0, l=0;
        for(int r=1; r<p.size(); r++){
            if(p[l]>p[r]){
                l=r;
                continue;
            }
            ans = max(ans, p[r]-p[l]);
        }
        return ans;
    }
};
