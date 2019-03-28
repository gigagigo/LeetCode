class Solution {
public:
    int myAtoi(string str) {
        double r=0;
        int i;
        bool m = false;
        
        if (str.length() == 0) {return 0;}
        
        for (i=0; i < str.length(); i++) {if (str.at(i) != ' ') {break;}}
        
        if (i == str.length()) {return 0;}
        
        if (str.at(i) < 48 || str.at(i) > 57){
            if (str.at(i) == '-') {m = true; i++;}
            else if (str.at(i) == '+') {i++;}
            else return 0;
        }
        
        for (; i < str.length(); i++){
            if (str.at(i) >= 48 && str.at(i) <= 57) {r = str.at(i) - 48 + r * 10;}
            else {break;}
        }
        
        if (r > INT_MAX) {return m?INT_MIN:INT_MAX;}
        else {return m?(-1)*(int)r:(int)r;}
    }
};