class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() < 2) return s;
        
        int start = 0;
        string res = "";
        
        while (start < s.length()){
            int l = start;
            int r = start;
            
            // È¦¼ö, Â¦¼ö ±¸ºÐ ´Ü°è Á¦°Å
            while (l-1 > 0 && s[l] == s[l-1]) l--;
            while (r+1 < s.length() && s[r] == s[r+1]) r++;
            
            start = r + 1;
            
            while (l > 0 && r+1 < s.length() && s[l-1] == s[r+1]){l--; r++;}
            if (r-l+1 > res.size()){res = s.substr(l,r-l+1);}
        }
        
        return res;
    }
};