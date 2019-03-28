class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max=0, sub_l=0;
        int l = s.length();
        string sub_s = "";
        
        for (int i=0;i<l;i++){
            for (int j=i+sub_l;j<l;j++){
                char c = s.at(j);
                if (sub_s.find(c) == string::npos){
                    sub_s += c;
                    if (max < ++sub_l) max = sub_l;
                }
                else{
                    sub_s.erase(0,1);
                    sub_l--;
                    break;
                }
            }
        }
        
        return max;
    }
};