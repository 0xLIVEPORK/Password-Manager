#include <iostream>
#include <cstdlib>
#include <limits>
#include <string>
#include <fstream>

struct PW_Management
{
  std::string Generated;
  unsigned short length;


  std::string Generate_Password(unsigned short length)
  {
  std::string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                      "abcdefghijklmnopqrstuvwxyz"
                      "0123456789"
                      "!@#$%^&*()";

    for(int i = 0; i < length; i++)
    {
      Generated += chars[rand() % chars.length()];
    }

    return Generated;
    } 

  std::string Encrypt_Password(std::string Generated)
  {
    std::string word_list[4] = {"She Said Take Your Time", 
                                 "Don't Have to Rush",
                                "RAGHHHHHHHHHHHHHHH",
                                "IDK WHAT TF IM DOING"};

    std::string random_word = word_list[rand() % sizeof(word_list) / sizeof(word_list[0])];

    for (int i = 0; i < random_word.length(); i++)
    {
      Generated[i] ^= random_word[i];
    }

    return Generated;
  }
};


int main() {
  srand(time(0));
  
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

  std::cout << Manager.Generate_Password(Manager.length) << "\n";
  std::cout << Manager.Encrypt_Password(Manager.Generated);

  return EXIT_SUCCESS;
}

