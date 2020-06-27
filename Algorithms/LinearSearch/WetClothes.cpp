#include <iostream>
#include <limits>
int main()
{
  int n, m, g;
  std::cin >> n >> m >> g;
  int t[n], a[m];
  for (int i = 0; i < n; i++)
  {
    std::cin >> t[i];
  }
  for (int i = 0; i < m; i++)
  {
    std::cin >> a[i];
  }
  int max_ = std::numeric_limits<int>::min();
  for (int i = 1; i < n; i++)
  {
    max_ = std::max(t[i] - t[i - 1], max_);
  }
  int c = 0;
  for (int i = 0; i < m; i++)
  {
    if (a[i] <= max_)
    {
      c++;
    }
  }
  std::cout << c << std::endl;
}
