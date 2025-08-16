class Solution {
    public boolean isPowerOfFour(int n) {
        if(n == 1) {
            return true;
        }
        if(n <= 0 || n % 4 != 0) {
            return false;
        }

        for(int i = 0; i < n; i++) {
            if(Math.pow(4, i) > n){
                break;
            }
            else if(Math.pow(4, i) == n) {
                return true;
            }
        }
        return false;
    }
}


public class PowerOfFour {
    public static void main(String[] args) {
        Solution solution = new Solution();
        System.out.println(solution.isPowerOfFour(8)); // true
        System.out.println(solution.isPowerOfFour(5));  // false
        System.out.println(solution.isPowerOfFour(1));  // true
        System.out.println(solution.isPowerOfFour(0));  // false
        System.out.println(solution.isPowerOfFour(-4)); // false
    }
}