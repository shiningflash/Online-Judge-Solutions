public class BearPair {
  public int bigDistance(String s) {
  	int x = s.length(), ans = -1, k = 0;
    boolean flag = true;
    for (int i = 0; i < x; i++) {
        for (int j = x-1; j > i; j--) {
            if (s.charAt(i) != s.charAt(j)) {
                k = j - i;
                flag = false;
                break;
            }
         }
      if (!flag) ans = Math.max(k, ans);
      else ans = -1;
    }
    return ans;
  }
}