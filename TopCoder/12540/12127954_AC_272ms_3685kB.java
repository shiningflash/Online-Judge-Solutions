public class DeerInZooDivTwo {
  public int[] getminmax(int N, int K) {
    int min = 0, max = N;
    int p = 2*N - K;
    min = p - N; max = p / 2;
    if (min < 0) min = 0;
    int arr[] = new int[2];
    arr[0] = min; arr[1] = max;
    return arr;
  }
}