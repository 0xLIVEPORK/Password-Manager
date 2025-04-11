#include <iostream>
#include <cstdlib>
#include <limits>
#include <string>
#include <fstream>

struct PW_Management
{
  unsigned short length;

  std::string Generate_Password(unsigned short &length)
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
  
  
};


int main() {
  PW_Management Manager;


  std::cout << "Enter a Number: ";

  while(true)
  {
    if(!(std::cin >> Manager.length) || Manager.length < 0 || Manager.length > 250)
    {
      std::cerr << "You have Inputted an \"INVALID SHORT INTEGER\"\nTry Again: ";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      continue;
    } 
  break;
  }

  std::cout << Manager.Generate_Password(Manager.length);

  return EXIT_SUCCESS;
}

