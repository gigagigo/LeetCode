class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x == 0) return true;
        
        vector<int> parse;
        
        while (x > 0){
            parse.push_back(x%10);
            x = x / 10;
        }
        
        for (int i=0; i <= parse.size()/2; i++){
            if (parse[i] != parse[parse.size()-i-1]) {return false;}
        }
        
        return true;
    }
};