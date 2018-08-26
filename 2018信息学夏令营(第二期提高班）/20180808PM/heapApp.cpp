#include <cstdio>
#include <queue>
#include <iostream>
using namespace std;

int main() {
  priority_queue<int> q;
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int t;
    scanf("%d", &t);
    q.push(t);
  }
  while (q.size()) {
    printf("%d ", q.top());
    q.pop();
  }
  return 0;
}