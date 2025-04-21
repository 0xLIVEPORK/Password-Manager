#include <iostream>
#include <cstdlib>
#include <limits>
#include <string>
#include <fstream>
#include <ctime>

struct PW_Management
{
  std::string word_list[4] = fasfs
  {
    "She Said Take Your Time", 
    "Don't Have to Rush",
    "RAGHHHHHHHHHHHHHHH",
    "IDK WHAT TF IM DOING"
  };

  std::string Generated;
  std::string random_word = word_list[rand() % (sizeof(word_list) / sizeof(word_list[0]))];
  unsigned short length;
  std::string* pgen;



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

std::string Encrypted;
  std::string Encrypt_Password(std::string Generated)
  {
    std::string Encrypted = Generated;
    for (int i = 0; i < Generated.length(); i++)
    {
      Encrypted[i] ^= random_word[i % random_word.length()];
    }

    return Encrypted;
  }

  std::string Cipher(std::string Encrypted)
  {
    std::string Deciphered = Encrypted;
    for(int i = 0; i < Deciphered.length(); i++)
    {
      Deciphered[i] ^= random_word[i % random_word.length()];
    }

    return Deciphered;
  }
};


int main() {
  
  
  
  PW_Management Manager;
  Manager.Generated;
  unsigned short Menu_Choice;

  do 
  {
    if(!(std::cin >> Menu_Choice) || Menu_Choice < 0 || Menu_Choice > 4)
    {
      std::cerr << "You Entered Invalid Integer\nTry Again:";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      continue;
    }
  break;
  } while(true);

  std::cout << "What is the Length of the Password ";

    while(true)
    {
    if(!(std::cin >> Manager.length) || Manager.length < 0 || Manager.length > 250)
    {
      std::cerr << "You have Inputted an \"INVALID SHORT INTEGER\"\nTry Again: ";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      continue;
    } 


  switch(Menu_Choice)
  {
    case 1:

    std::cout << "Password: " << Manager.Generate_Password(Manager.length) << "\n";

    case 2:
    Manager.Encrypted = Manager.Encrypt_Password(Manager.Generated); 
    std::cout << "Encrypted: " << Manager.Encrypted << "\n";


    break;
    }

    default:
    break;
  }

std::cout << Manager.Cipher(Manager.Encrypted);

  return EXIT_SUCCESS;
}

