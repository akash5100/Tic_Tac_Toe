#include <stdio.h>
#include "helper.h"
#include <stdbool.h>


int check_winner()
{

}

bool checkrow()
{
    //todo
    return true;
}

bool checkcolumn()
{
    //todo
    return true;
}

bool checkcross()
{
    //todo
    return true;
}

int play()
{   
       
    printf("Tic Tac Toe\n   2 players\n");
    printf("Player 1 ~ X\nPlayer 2 ~ O\n");
    rules();
    printf("start\n");

        for (int i = 0; i < 9 ; i++)
        {
            promt1();
            winner = check_winner();
                if (winner != 0)
                {
                    return 0;
                }
            promt2();
            winner = check_winner();
                if (winner != 0)
                {
                    return 0;
                }
        }
        
    displayboard(board);
}

int main(void)
{
    play();
    return 0;
}