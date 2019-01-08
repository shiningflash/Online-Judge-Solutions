#include <bits/stdc++.h>
using namespace std;

int main() {
  int student;

  while ((scanf("%d", &student)) != 0) {
    if (student == 0) break;  // if 0, code terminated

    double cost[student], total = 0.0;

    // input cost
    for(int i = 0; i < student; i++) {
      cin >> cost[i];
      total += cost[i];
    }

    double average = total / student * 1.0;
    double exchange = 0.0, dif = 0.0, neg_sum = 0.0, pos_sum = 0.0;

//    cout << "average " << average << endl;

    for(int i = 0; i < student; i++) {
      dif = (double) (long) ((cost[i] - average) * 100.0) / 100.0;  // ensure 0.01 precision
      if(dif < 0) neg_sum += dif;
      else pos_sum += dif;

//      cout << "dif " << dif << endl;

//      cout << "neg_sum " << neg_sum << endl;
//      cout << "pos_sum " << pos_sum << endl;
    }
    exchange = (-neg_sum > pos_sum) ? -neg_sum : pos_sum;
    printf("$%.2lf\n", exchange);
  }
}