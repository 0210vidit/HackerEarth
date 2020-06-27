#include <algorithm>
#include <string>
#include <iostream>

int main()
{
  int t;
  std::cin >> t;
  char arr[] = {'A',
                'E',
                'I',
                'O',
                'U',
                'a',
                'e',
                'i',
                'o',
                'u'};
  char *end = arr + sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < t; i++)
  {
    std::string str;
    std::cin >> str;
    int vowel = 0;

    for (int i = 0; i < str.length(); i++)
    {

      char *position = std::find(arr, end, str.at(i));
      if (position != end)
      {
        vowel++;
      }
    }
    std::cout << vowel << std::endl;
  }
}