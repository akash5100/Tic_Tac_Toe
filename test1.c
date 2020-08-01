#include <stdio.h>
#include "helper.h"
#include <stdbool.h>


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

void play()
{   printf("Tic Tac Toe\n   2 players\n");
    printf("Player 1 - X\nPlayer 2 - O\n");
    rules();
    //displayboard(board);
}

int main(void)
{
    play();
    return 0;
}