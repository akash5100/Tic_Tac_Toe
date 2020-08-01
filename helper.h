#include<stdio.h>
char board[3][3];
#define column 3

/*
print rules
promt user 1 
promt user 2
display board
*/


//print rules
void rules()
{
    printf("\n");  
    printf("\t  1 | 2  | 3  \n"); 
    printf("\t--------------\n"); 
    printf("\t  4 | 5  | 6  \n"); 
    printf("\t--------------\n"); 
    printf("\t  7 | 8  | 9  \n");
    printf("Press the number in your chance to mark in the board\n");
    printf("\nGLHF\n\n\n");
}

//promt player 1
int promt1() //X
{
    int A;
    printf("player 1 ~\n");
    scanf("%i",&A);
    return A;
}

//promt player 2
int promt2() //O
{
    int A;
    printf("player 2 ~\n");
    scanf("%i",&A);
    return A;
}

//display board
void displayboard(char board[][column])
{
    printf("\n\n"); 
      
    printf("\t  %c | %c  | %c  \n", board[0][0], board[0][1], board[0][2]); 
    printf("\t--------------\n"); 
    printf("\t  %c | %c  | %c  \n", board[1][0], board[1][1], board[1][2]); 
    printf("\t--------------\n"); 
    printf("\t  %c | %c  | %c  \n\n", board[2][0], board[2][1], board[2][2]);
}