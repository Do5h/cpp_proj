#include <string>
#include <iostream>

class Player {
public:
    char P_ID;
    std::string P_Name;
    
    void set_PInfo (char P_ID) {
        this -> P_ID = P_ID;
        std::string temp;
        
        std::cout << "Enter player name: ";
        std::getline(std::cin,P_Name);
    }

    void get_P_Info() {
        std::cout << "Player name: " << P_Name << std::endl;
        std::cout << "Player ID: " << P_ID << std::endl;
        std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;
        std::cout << "Note: Chose from 1 ~ 9." << std::endl;

    }

    void winner () {
        system("cls");
        std::cout << P_Name << " is The Winner !!." << std::endl;
        std::cout << "=-=-=-=-=-=-=-=-=-=-=" << std::endl;
    }
};

