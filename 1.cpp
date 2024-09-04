#include <bits/stdc++.h>

using namespace std;
const int N = 10000;

long long term[N];
bool E = false;

long long fib(int n, long long t) {
  if (n <= 1) return n;

  if (term[n] != 0)
    return term[n];
  else {
    term[n] = fib(n - 1, t) + fib(n - 2, t);
    if (t == term[n]) E = true;
    return term[n];
  }
}

int main() {
  long long n;
  cin >> n;
  fib(90, n);

  cout << (E or n == 0 or n == 1
               ? "O número informado pertence a sequência de fibonacci.\n"
               : "O número informado não pertence a sequência de fibonacci.\n");
}
