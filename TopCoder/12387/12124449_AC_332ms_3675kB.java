public class EasyHomework {
    public String determineSign(int[] A) {
        int p = 0;
        for (int i = 0; i < A.length; i++) {
            if (A[i] == 0) {
                return "ZERO";
            }
            if (A[i] < 0) {
                p++;
            }
       	}
        if (p % 2 == 0) 
            return "POSITIVE";
        else
            return "NEGATIVE";
   }
}