#include <iostream>
#include <algorithm>

void solve(int[]);

int main(int argc, char *argv[]) {
  int edges[] = {2, 3, 4, 5, 10};
  solve(edges);
}

void solve(int a[]) {
  int n = 5;
  int ans = 0;

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
	int len = a[i] + a[j] + a[k];
	int ma = std::max(a[i], std::max(a[j], a[k]));
	int rest = len - ma;

	if (ma < rest) {
	  ans = std::max(ans, len);
	}
      }
    }
  }

  std::cout << ans << std::endl;
}
