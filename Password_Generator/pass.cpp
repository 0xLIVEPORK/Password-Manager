#include <iostream>
#include <cstdlib>
#include <limits>
#include <ctime>

class user{
    protected:

    std::string username;
    std::string userpass;
    
    public:

    
};

class passmanager: protected user{
    private:

    std::string password;
    std::string key = "whyisthisshitopenforeveryonetoreadahaha....";
    int choice;
    int length;

    public:

    std::string generatePassword(int &length){
        const std::string chars =
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz"
            "0123456789"
            "!@#$%^&*()";

        for(int i = 0; i < length; i++) {
            password += chars[rand() % chars.size()];
        }

        return password;
    }

    void Menu() {
        while (true) {
            std::cout << "\tPASSWORD MANAGER\n\n"
                      << "[1] Generate Password\n"
                      << "[2] Saved Users\n"
                      << "[3] Exit\n"
                      << "\nChoose a Number: ";
    
            if (!(std::cin >> choice) || choice > 3 || choice < 1) {
                std::cerr << "Invalid Input\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }
    
            switch (choice) {
                case 1:
                    while (true) {
                        std::cout << "Enter a Length: ";
                        if (!(std::cin >> length) || length > 200 || length < 1) {
                            std::cerr << "Invalid Input\n";
                            std::cin.clear();
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            continue;
                        }
                        break;
                    }
                    password.clear(); // Clear before generating
                    std::cout << generatePassword(length) << std::endl;
                    break;
    
                case 2:
                    std::cout << "Saved Users (not implemented yet)\n";
                    break;
    
                case 3:
                    std::cout << "Exiting...\n";
                    return; // Exit the Menu
            }
        }
    }
};

int main() {
    srand(time(0));
    passmanager PasswordManager;
    
    std::cout << "Log-in First\n\n"; // Still not in use we'll skip to the menu

    PasswordManager.Menu();

    int length;

    return EXIT_SUCCESS;
}
