#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <limits>
#include <fstream>

struct keypass{
  std::string password;
  std::string encrypted;
  std::string decrypter;
  };


// Functions
void Menu_Loop();

std::string Password(std::string &Password, std::string &Encrypted);

int main() {
  srand(time(0));

    Menu_Loop();
    
return EXIT_SUCCESS;
}

void Menu_Loop()
{
    int choice;
    int tries = 0;
    std::string rand_encrypter[5] = 
    {
      "NEE KAMISAMA", 
      "Oni Gae Da Yo", 
      "Idk what the fuck the password is", 
      "A number 7 large", 
      "What the fuck am I typing"
    };

    keypass kp;
    kp.encrypted = rand_encrypter[rand() % (sizeof(rand_encrypter) / sizeof(rand_encrypter[0]))];

    std::cout << 
    "[1] - Generate A Password\n"
    "[2] - Save a Log-in\n"
    "[3] - View Saved Log-ins\n\n"
    "Enter a Valid Integer: ";

    do
    {
        if(tries > 4)
          {
            std::cout << "You have tried to many times";
            break;
          } else if(!(std::cin >> choice) || choice <= 0 || choice > 3) 
          {
          tries++;
          std::cerr << "Invalid Input\nTry Again: ";
          std::cin.clear();
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
          std::cout << tries;
          continue;
          }
    break;
    }
    while(true);

    switch(choice)
    {
      case 1:
      std::cout << Password(kp.password, kp.encrypted);
      break;
    }

    

}

std::string Password(std::string &Password, std::string &Encrypted)
{
  int length;
  std::string chars = 
  "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
  "abcdefghijklmnopqrstuvwxyz"
  "0123456789"
  "!@#$%^&*()";

  while(true)
  {
    if(!(std::cin >> length) || length <= 0 || length > 100)
    {
      std::cerr << "\nLength is Invalid\nTry Again: ";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      continue;
    }
  break;
  }
  for(int i = 0; i < length; i++)
  {
    Password += chars[rand() % chars.length()];
  }

  //encryption
  std::string Test = Password;
  for(int i = 0; i < length; i++)
  {
    Test.at(i) ^= Encrypted[i % Encrypted.length()];
  }
  
  std::cout << "\n" << Test;
  return Password;
}
