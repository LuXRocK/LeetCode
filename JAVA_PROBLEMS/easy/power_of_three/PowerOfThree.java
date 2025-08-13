class Solution {
    public boolean isPowerOfThree(int n) {
        
        
        if (n < 1) {
            return false;
        }
        
        if (n == 1) {
            return true;
        }

        for(int i = 0; i < n; i++){
            if(Math.pow(3, i) == n){
                return true;
            }else if(Math.pow(3, i) > n){
                break;
            }
        }

        return false;
    }
}

public class PowerOfThree {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int n = 27;
        boolean result = solution.isPowerOfThree(n);
        System.out.println("Is " + n + " a power of three? " + result);
    }
}