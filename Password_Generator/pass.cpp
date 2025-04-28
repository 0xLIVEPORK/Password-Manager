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

    std::string key = "whyisthisshitopenforeveryonetoreadahaha....";
    unsigned short choice;

    public:

    void Menu(){
        std::cout << "\tPASSWORD MANAGER\n\n"
              << "[1] Generate Password\n"
              << "[2] Saved Users\n"
              << "[3] Exit\n"
              << "\nChoose a Number: ";

        std::cin >> choice;
    }
};

int main() {

    srand(time(0));

    passmanager PasswordManager;

    PasswordManager.Menu();

    int length;

    std::cout << "Log-in First"; // Still not in use we'll skip to the menu

    return EXIT_SUCCESS;
}
