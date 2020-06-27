#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int c1 = 0, c2 = 0;
    if (s.length() < 4)
      goto LAST;
    for (int i = 0; i <= s.length() - 4; i++)
    {
      if (s[i] == 'S' && s[i + 1] == 'U' && s[i + 2] == 'V' && s[i + 3] == 'O')
        c1++;
    }
    if (s.length() < 7)
      goto LAST;
    for (int i = 0; i <= s.length() - 7; i++)
    {
      if (s[i] == 'S' && s[i + 1] == 'U' && s[i + 2] == 'V' && s[i + 3] == 'O' && s[i + 4] == 'J' && s[i + 5] == 'I' && s[i + 6] == 'T')
        c2++;
    }
  LAST:
    cout << "SUVO = " << c1 - c2 << ", "
         << "SUVOJIT = " << c2 << '\n';
  }
  return 0;
}