import java.util.ArrayList;
import java.util.Collections;

class Solution {
    public int maximumNumber(int num) {
        ArrayList<Integer> numList = new ArrayList<>();
        numList.add(num);
        String numString = String.valueOf(num);
        for(int i = 0; i < numString.length(); i++) {
            if(numString.charAt(i) == '6') {
                StringBuilder sb = new StringBuilder(numString);
                sb.setCharAt(i, '9');
                numList.add(Integer.parseInt(sb.toString()));
            }else if(numString.charAt(i) == '9') {
                StringBuilder sb = new StringBuilder(numString);
                sb.setCharAt(i, '6');
                numList.add(Integer.parseInt(sb.toString()));
            }
        }

        return Collections.max(numList);
    }
}


public class MaximumNumber {
    public static void main(String[] args) {
        Solution solution = new Solution();
        int num = 9669;
        int result = solution.maximumNumber(num);
        System.out.println("The maximum number is: " + result);
    }
}