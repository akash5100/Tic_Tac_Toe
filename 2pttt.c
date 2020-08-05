#include <stdio.h>
#include <stdbool.h>
#include "helper.h"




int checkrow()
{
    if(board[0][0] == board[0][1] == board[0][2])
    {
        if (board[0][0] == 1)
            return 1;
        else{
            if (board[0][0] == 2)
                winner = 2;
        return true;}
    }
    else
    {
        if(board[1][0] == board[1][1] == board[1][2])
        {
            if (board[0][0] == 1)
                winner = 1;
            else{
                if (board[0][0] == 2)
                    winner = 2;
            return true;}
        }
        else
        {
            if(board[2][0] == board[2][1] == board[2][2])
            {   
                if (board[0][0] == 1)
                    winner = 1;
                else{
                    if (board[0][0] == 2)
                        winner = 2;
                return true;}
            }
            else
            {
                return false;
            }   
        }   
    }  
}

int checkcolumn()
{
    if(board[0][0] == board[1][0] == board[2][0])
    {
        if (board[0][0] == 1)
            winner = 1;
        else{
            if (board[0][0] == 2)
                winner = 2;
        return true;}
    }
    else
    {
        if(board[0][1] == board[1][1] == board[2][1])
        {
            if (board[0][0] == 1)
                winner = 1;
            else{
                if (board[0][0] == 2)
                    winner = 2;
            return true;}
        }
        else
        {
            if(board[0][2] == board[1][2] == board[2][2])
            {   
                if (board[0][0] == 1)
                    winner = 1;
                else{
                    if (board[0][0] == 2)
                        winner = 2;
                return true;}
            }
            else
            {
                return false;
            }   
        }   
    }  
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