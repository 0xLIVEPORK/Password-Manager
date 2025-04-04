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


void Menu_Loop();

std::string Password(std::string Password);

int main() {

  

    Menu_Loop();
    
return EXIT_SUCCESS;
}

void Menu_Loop()
{
    std::cout << 
    "[1] - Generate A Password\n"
    "[2] - Save a Log-in\n"
    "[3] - View Saved Log-ins\n\n"
    "Enter a Valid Integer: ";

    int choice;
    int tries = 0;

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
      Password(keypass std::string Password)
    }

    

}
