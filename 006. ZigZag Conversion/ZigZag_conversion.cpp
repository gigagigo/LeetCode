class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        string res = "";
        int len = s.length();
        int l = (numRows-1)*2;
        int r = 0;
        
        for (int i=0; i < numRows; i++){
            int c = i;
            while (c < len){
                res += s.at(c);
                if (c == len-1) break;
                if (l == 0) c += r;
                else if (r == 0) c += l;
                else{
                    c += l;
                    if (c >= len) break;
                    res += s.at(c);
                    c += r;
                }
            }
            l -= 2;
            r += 2;
        }
        
        return res;
    }
};