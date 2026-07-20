class Solution {
public:

    bool isAlphaNumeric(char ch){
        if((ch >= '0' && ch <= '9') || (tolower(ch) >='a' && tolower(ch)<='z')){
            return true;
        }else{
            return false;
        }
    }

    bool isPalindrome(string s) {
        int n=s.length();
        int left =0, right =n-1;

        while(left<right){
            if(!isAlphaNumeric(s[left])){
                left++;
                continue;
            }
            if(!isAlphaNumeric(s[right])){
                right--;
                continue;
            }
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
