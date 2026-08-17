#include <iostream>
#include <ostream>

int play()
{
  // std::string input;
  int input{};
  std::cout << "Testing 123 input text please: " << std::endl;
  std::cin >> input;
  std::cout << "\n you entered: " << input << std::endl;
  return 0;
}

int main()
{
  std::cout << "Enter 3 numbers: " << std::endl;

  int x{};
  std::cin >> x;

  int y{};
  std::cin >> y;

  int z{};
  std::cin >> z;

  std::cout << "You entered " << x << ", " << y << ", " << z << "." << std::endl;

  return 0;
}
