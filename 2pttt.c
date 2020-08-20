#include <stdio.h>
#include <stdbool.h>
#include "helper.h"




int checkrow()
{
    //todo  
}

int checkcolumn()
{
    //todo
}

int checkcross()
{
    //todo
    return true;
}

int play()
{   
       
    printf("Tic Tac Toe\n   2 players\n");
    printf("Player 1 ~ 1\nPlayer 2 ~ 2\n");
    rules();
    printf("start\n");

        for (int i = 0; i < 9 ; i++)
        {
            promt1();
            displayboard(board);
            winner = check_winner();
                if (winner != 0)
                {
                    printf("winner ~ player 1");
                    return 0;
                }
            promt2();
            displayboard(board);
            winner = check_winner();
                if (winner != 0)
                {
                    printf("winner ~ player 2");
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