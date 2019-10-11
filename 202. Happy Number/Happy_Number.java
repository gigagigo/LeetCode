// Runtime 2ms 62.07% , Memory 33.6MB 10.60%
class Solution {
    public boolean isHappy(int n) {
        HashSet<Integer> log = new HashSet<Integer>();
        
        while(n != 1){
            if (log.contains(n)) return false;
            else{
                log.add(n);
                int sum = 0;
                int cut = 0;
                while (n > 0){
                    cut = n % 10;
                    n = n / 10;
                    sum += cut * cut;
                }
                n = sum;
            }
        }
        return true;
    }
}