class Solution {
    public String largestGoodInteger(String num) {
        
        String max_num = "";
        for(int i = 0; i < num.length() - 2; i++) { 
            String current = "";    
            current += num.charAt(i);
            current += num.charAt(i+1);
            current += num.charAt(i+2);    
            
            int currentInt = Integer.parseInt(current);
            if(currentInt % 111 == 0) {

                if(max_num.isEmpty()) {
                    max_num = current;
                }
                else if(currentInt > Integer.parseInt(max_num)){
                    max_num = current;
                }
            }
        }
        
        return max_num;
    }
}

public class LargestNumber {
    public static void main(String[] args) {
        Solution solution = new Solution();
        String num = "2300019";
        String result = solution.largestGoodInteger(num);
        System.out.println("Largest good integer: " + result);
    }
} 