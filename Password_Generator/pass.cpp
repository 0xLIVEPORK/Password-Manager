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

    void generatePassword(){
        

    }    

    void Menu(){
        std::cout << "\tPASSWORD MANAGER\n\n"
              << "[1] Generate Password\n"
              << "[2] Saved Users\n"
              << "[3] Exit\n"
              << "\nChoose a Number: ";

        while(true)
        {
            if(!(std::cin >> choice) || choice > 3) {
                std::cerr << "Invalid Input\n";

                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                continue;
            }
            break;
        }

        switch(choice)

        case 1:


        case 2:

        default:
        std::cout << "Out of Bounds";
        
    }


};

int main() {
    passmanager PasswordManager;
    srand(time(0));

    
    std::cout << "Log-in First"; // Still not in use we'll skip to the menu

    PasswordManager.Menu();

    int length;

    return EXIT_SUCCESS;
}
