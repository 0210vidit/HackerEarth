#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdlib>
int main()
{
  std::vector<int> a;
  std::vector<int> b;
  std::vector<int> c;
  std::vector<int>::iterator it;
  int a_size;
  std::cin >> a_size;
  for (int i = 0; i < a_size; i++)
  {
    int temp;
    std::cin >> temp;
    a.push_back(temp);
  }
  std::sort(a.begin(), a.end());
  int c_size;
  std::cin >> c_size;
  for (int i = 0; i < c_size; i++)
  {
    int temp;
    std::cin >> temp;
    c.push_back(temp);
  }
  std::sort(c.begin(), c.end());
  int r = std::abs(a[a.size() - 1] - c[c.size() - 1]);
  for (int i = 1; i <= r; i++)
  {
    for (int j : a)
    {
      int el = i + j;
      it = std::find(c.begin(), c.end(), el);
      if (it != c.end())
      {
        b.push_back(el);
      }
    }
  }
  std::sort(b.begin(), b.end());
  for (int i : b)
  {
    std::cout << i << std::endl;
  }
}