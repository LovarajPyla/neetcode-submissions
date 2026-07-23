class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n= nums.size();
        unordered_set<int> set;
        for(int num : nums){
            if(set.count(num)){
                return true;
            }
            set.insert(num);
        }
        return false;
    }
};