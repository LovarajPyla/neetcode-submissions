class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr(n+1);
        for(int i=0; i<=n; i++){
            int num =i;
            while(num){
                num &= num-1;
                arr[i]++;
            }
        }
        
        return arr;
        
    }
};
