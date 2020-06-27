#include <iostream>
#include <vector>

int lastOccurence(std::vector<int> arr, int k)
{
  int index = 0;
  bool found = false;
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] == k)
    {
      index = i;
      found = true;
    }
  }
  if (index >= 0 && found == true)
  {
    return ++index;
  }
  else
  {
    return -1;
  }
}
int main()
{
  int n, k;
  std::cin >> n >> k;
  std::vector<int> arr;
  for (int i = 0; i < n; i++)
  {
    int x;
    std::cin >> x;
    arr.push_back(x);
  }
  // for (auto i : arr)
  // {
  //   std::cout << i << std::endl;
  // }
  int res = lastOccurence(arr, k);
  std::cout << res << std::endl;
}