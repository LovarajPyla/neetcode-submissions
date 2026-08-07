class Solution {
public:
    int trap(vector<int>& h) {
        if(h.empty()) return 0;
        int l=0, r=h.size()-1;
        int ans=0;
        int leftMax = h[l];
        int rightMax =h[r];
        while(l<r){
            if(leftMax<rightMax){
                l++;
                leftMax = max(leftMax, h[l]);
                ans += leftMax-h[l];
            }else{
                r--;
                rightMax = max(rightMax, h[r]);
                ans += rightMax-h[r];
            }
        }
        return ans;
    }
};
