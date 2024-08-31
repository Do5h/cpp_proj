#include "Player.h"
#include "Game.h"

int main () {
    Player P_1,P_2;
    Game G;
    int i = 0;

    P_1.set_PInfo('X');
    P_2.set_PInfo('O');
 

    while (1) {
        system("cls");
        P_1.get_P_Info();
        G.Print_Pord();
        G.take_Input(P_1.P_ID);
        if (G.check_win(P_1)) {G.Print_Pord(); break; }
        i++;

        if(i == 9) {std::cout << "* Drow *" << std::endl; break;}

        system("cls");
        P_2.get_P_Info();
        G.Print_Pord();
        G.take_Input(P_2.P_ID);
        if (G.check_win(P_2)) {G.Print_Pord(); break;}
        i++;
    }
    system("pause");
}