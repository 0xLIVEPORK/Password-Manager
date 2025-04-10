#include <iostream>
#include <cstdlib>
#include <limits>
#include <string>
#include <fstream>

std::string Generate_Password(unsigned short length);

int main() {
  unsigned short length;

  std::cout << "Enter a Number: ";

  while(true)
  {
    if(!(std::cin >> length) || length < 0 || length > 250)
    {
      std::cerr << "You have Inputted an \"INVALID SHORT INTEGER\"\nTry Again: ";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      continue;
    } 
  break;
  }

  std::cout << Generate_Password(length);

  return EXIT_SUCCESS;
}

std::string Generate_Password(unsigned short length)
{
  std::string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                      "abcdefghijklmnopqrstuvwxyz"
                      "0123456789"
                      "!@#$%^&*()";

  std::string Generated;
  for(int i = 0; i < length; i++)
  {
    Generated += chars[rand() % chars.length()];
  }

  return Generated;
}
