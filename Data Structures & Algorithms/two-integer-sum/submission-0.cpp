class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;
       for(int i=0; i<nums.size(); i++){
            int difference = target - nums[i];
            if(um.find(difference) != um.end()){
                return {um[difference], i};
            }
            um[nums[i]] = i;
       }
            return{-1,-1};
    }
};
