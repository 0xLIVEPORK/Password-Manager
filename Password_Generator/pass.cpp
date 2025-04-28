#include <iostream>
#include <cstdlib>
#include <limits>
#include <ctime>

class user{
    private:

    std::string username;
    std::string userpass;
    
    public:

    std::string generatepass(int length) {


    }

    
};

class passmanager{

    public:

    void Menu(){
        std::cout << "\tPASSWORD MANAGER\n\n"
              << "[1] Generate Password\n"
              << "[2] Saved Users\n"
              << "[3] Exit\n"
              << "\nChoose a Number: ";

        std::cin >> 
    }
};

int main() {

    srand(time(0));

    int length;

    std::cout << "Log-in First"; // Still not in use we'll skip to the menu

    
}
