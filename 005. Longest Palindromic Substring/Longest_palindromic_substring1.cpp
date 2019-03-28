class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() < 2) return s;
        
        for (int i=0; i < s.length()-1; i++){
            palindrom(s,i,i);   // È¦¼ö
            palindrom(s,i,i+1); // Â¦¼ö
            if (res.length() == s.length()) break;
        }
        
        return res;
    }
private:
    string res = "";
    void palindrom(string s, int l, int r){
        while (l >= 0 && r < s.length() && (s.at(l) == s.at(r))) {l--;r++;}
        l++;r--;
        if (res.length() < (r-l+1)) res = s.substr(l,r-l+1);
    }
};