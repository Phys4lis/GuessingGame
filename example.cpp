#include <iostream>

using namespace std;

int main()
{
  int input = 0;
  cin >> input;  
  cout << "Before loop " << input << endl;
  do {
    cin >> input;
    cout << "In loop " << input << endl;
  } while (input == 5);
  cout << "After loop " << input << endl;
  return 0;
}
