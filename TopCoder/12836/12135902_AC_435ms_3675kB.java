public class FoxAndSightseeing {
  public int getMin(int[] position) {
    int min = 2100000000, sum = 0, p = 0;
    for (int i = 0; i < position.length-1; i++) {
      sum = 0; p = 0;
      for (int j = 0; j < position.length; j++) {
        if (j != i) {
          sum += Math.abs(position[p] - position[j]);
          p = j;
        }
      }
      if (min > sum) min = sum;
    }
    return min;
  }
}