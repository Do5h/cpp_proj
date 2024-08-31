#include <iostream>

class Game {
    private:
        char XO[3][3] = {'1','2','3','4','5','6','7','8','9'};
    public:
    Player P;
    void Print_Pord () {
        for (int i = 0; i < 3; i++) {
            std::cout << XO[i][0] << "|" << XO[i][1] << "|" << XO[i][2] << std::endl;
        }
    }

    void take_Input (char P_ID) {
        char temp; int flag = 1;
        do {
            std::cout << "Enter ur chose: ";
            std::cin >> temp;
            switch (temp) {
                case '1': if(XO[0][0] == '1') {XO[0][0] = P_ID; flag = 0;} else {std::cout << "Try agin.\n";} break;
                case '2': if(XO[0][1] == '2') {XO[0][1] = P_ID; flag = 0;} else {std::cout << "Try agin.\n";} break;
                case '3': if(XO[0][2] == '3') {XO[0][2] = P_ID; flag = 0;} else {std::cout << "Try agin.\n";} break;
                case '4': if(XO[1][0] == '4') {XO[1][0] = P_ID; flag = 0;} else {std::cout << "Try agin.\n";} break;
                case '5': if(XO[1][1] == '5') {XO[1][1] = P_ID; flag = 0;} else {std::cout << "Try agin.\n";} break;
                case '6': if(XO[1][2] == '6') {XO[1][2] = P_ID; flag = 0;} else {std::cout << "Try agin.\n";} break;
                case '7': if(XO[2][0] == '7') {XO[2][0] = P_ID; flag = 0;} else {std::cout << "Try agin.\n";} break;
                case '8': if(XO[2][1] == '8') {XO[2][1] = P_ID; flag = 0;} else {std::cout << "Try agin.\n";} break;
                case '9': if(XO[2][2] == '9') {XO[2][2] = P_ID; flag = 0;} else {std::cout << "Try agin.\n";} break;
            default: std::cout << "Try agin.\n";
            }
        } while (flag);
    }

    bool check_win(Player P) {
        if(XO[0][0] == P.P_ID && XO[0][1] == P.P_ID && XO[0][2] == P.P_ID) {
            P.winner(); return true;    
        } else if (XO[1][0] == P.P_ID && XO[1][1] == P.P_ID && XO[1][2] == P.P_ID) {
            P.winner(); return true;  
        } else if (XO[2][0] == P.P_ID && XO[2][1] == P.P_ID && XO[2][2] == P.P_ID) {
            P.winner(); return true;  
        } else if (XO[0][0] == P.P_ID && XO[1][0] == P.P_ID && XO[2][0] == P.P_ID) {
            P.winner(); return true;  
        } else if (XO[0][1] == P.P_ID && XO[1][1] == P.P_ID && XO[2][1] == P.P_ID) {
            P.winner(); return true;  
        } else if (XO[0][2] == P.P_ID && XO[1][2] == P.P_ID && XO[2][2] == P.P_ID) {
            P.winner(); return true;  
        } else if (XO[0][0] == P.P_ID && XO[1][1] == P.P_ID && XO[2][2] == P.P_ID) {
            P.winner(); return true;  
        } else if (XO[0][2] == P.P_ID && XO[1][1] == P.P_ID && XO[2][0] == P.P_ID) {
            P.winner(); return true;  
        } else {return false;}
    }
};