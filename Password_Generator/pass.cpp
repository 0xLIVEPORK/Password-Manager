#include <iostream>
#include <cstdlib>
#include <limits>
#include <string>
#include <fstream>
#include <ctime>

struct PW_Management
{
  std::string word_list[4] = 
  {
    "She Said Take Your Time", 
    "Don't Have to Rush",
    "RAGHHHHHHHHHHHHHHH",
    "IDK WHAT TF IM DOING"
  };

  std::string random_word;
  std::string Generated;
  std::string Encrypted;
  unsigned short length;

  PW_Management()
  {
    random_word = word_list[rand() % 4];
  }

  std::string Generate_Password(unsigned short length)
  {
    std::string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                        "abcdefghijklmnopqrstuvwxyz"
                        "0123456789"
                        "!@#$%^&*()";

    Generated.clear(); // In case it's reused
    for (int i = 0; i < length; i++)
    {
      Generated += chars[rand() % chars.length()];
    }

    return Generated;
  }

  std::string Encrypt_Password(std::string input)
  {
    Encrypted = input;
    for (int i = 0; i < Encrypted.length(); i++)
    {
      Encrypted[i] ^= random_word[i % random_word.length()];
    }
    return Encrypted;
  }

  std::string Cipher(std::string input)
  {
    std::string Deciphered = input;
    for (int i = 0; i < Deciphered.length(); i++)
    {
      Deciphered[i] ^= random_word[i % random_word.length()];
    }
    return Deciphered;
  }
};

int main() {
  srand(static_cast<unsigned>(time(nullptr)));

  PW_Management Manager;

  std::cout << "Enter a Number: ";

  while (true)
  {
    if (!(std::cin >> Manager.length) || Manager.length > 250)
    {
      std::cerr << "You have Inputted an \"INVALID SHORT INTEGER\"\nTry Again: ";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      continue;
    }
    break;
  }

  std::cout << "Password:  " << Manager.Generate_Password(Manager.length) << "\n";
  std::cout << "Encrypted: " << Manager.Encrypt_Password(Manager.Generated) << "\n";
  std::cout << "Decrypted: " << Manager.Cipher(Manager.Encrypted) << "\n";

  return EXIT_SUCCESS;
}
