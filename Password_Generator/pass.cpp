#include <iostream>
#include <cstdlib>
#include <limits>
#include <string>
#include <ctime>
// #include <fstream> - Out of Scope 

std::string generatePassword(int length);
std::string xorecrypt(std::string pass);

int main() {
    srand(time(0));

    int length;

    std::cout << "Enter The Length of Password Generated: ";
    while(true) 
    {
        if(!(std::cin >> length) || length < 0 || length > 200)
        {
            std::cerr << "Invalid Input: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            continue;
        }
        break;
    }

    std::string newpass = generatePassword(length);
    std::cout << "Your Password: " << newpass << "\n";

    std::cout << xorecrypt(newpass);
return EXIT_SUCCESS;
}

// Functions
std::string generatePassword(int length) {
    const std::string chars =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789"
        "!@#$%^&*()";

    std::string password;
    for (int i = 0; i < length; ++i) {
        password += chars[rand() % chars.size()];
    }
    return password;
}


//I get that this should not be visible but this is xor encryption as a temporary bandaid
std::string xorecrypt(std::string pass) {
    std::string key = "notapassword"; 
    std::string encryptedpass = pass;
    for(int i = 0; i < pass.length(); i++)
    {
        encryptedpass.at(i) ^= key[i % key.length()];
    }
    return encryptedpass;
}

