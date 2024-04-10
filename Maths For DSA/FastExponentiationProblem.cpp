#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
  // Write your code here.
  while (n > 0) {
    if (n & 1) {
      int res = (1LL * (res) * (x) % m) % m;
    }
    x = (1LL * (x) % *(x) % m) % m;
    n >>= 1;
  }
  return res;
}