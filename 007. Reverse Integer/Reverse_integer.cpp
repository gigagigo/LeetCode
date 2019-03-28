class Solution {
public:
    int reverse(int x) {
        int digit[10] = {0};
        double r = 0;
        int i;
        for (i=0;i < 10;i++){
            digit[i] = x / pow(10,9-i);
            x -= digit[i] * pow(10,9-i);
        }
        i = 0;
        while (i < 10){
            if (digit[i] != 0){
                int j;
                for (j=0;i < 10; i++,j++){
                    r += digit[i] * pow(10,j);
                    if (r > INT_MAX || r < INT_MIN) return 0;
                }
            }
            i++;
        }
        
        return (int)r;
    }
};