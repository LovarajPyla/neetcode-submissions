class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0, right=heights.size()-1;
        int ans = INT_MIN;
        while(left<right){
            int height = min(heights[left], heights[right]);
            int width = right-left;
            int area = height *width;
            ans = max(ans, area);
            if(heights[left]>=heights[right]){
                right--;
            }else{
                left++;
            }
        }
        return ans;
        
    }
};
