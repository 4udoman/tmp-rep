#include <iostream>
#include <string>

using namespace std;

void cleaner()
{
  while (getchar() != '\n');
  cin.clear();
}

int main()
{
  int exit = 1;
  while (exit != 2)
  {
    try
    {

    }
    catch (string exc)
    {
      cout << exc;
    }
    cout << "\nContinue using the program?\n\t1 - Yes\n\t2 - No\n\t";
    cin >> exit;
    cleaner();
    cout << '\n';
  }
  system("pause");
  return 0;
}
