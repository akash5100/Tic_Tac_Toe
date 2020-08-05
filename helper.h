
#define column 3

int board[3][3] = {0,0,0,0,0,0,0,0,0};
int winner=0;

int checkcolumn();
int checkrow();
void input1(int a);
void input2(int a);
void rules();
int promt1();
int promt2();
void displayboard(int board[][column]);
int check_winner();
void declare_winner();

//get input from player 1
void input1(int a)
{
    switch (a)
    {
        case 1:
            if(board[0][0] == 0)
                board[0][0] = 1;
            break;
        case 2:
            if(board[0][1] == 0)
                board[0][1] = 1;
            break;
        case 3:
            if(board[0][2] == 0)
            board[0][2] = 1;
            break;
        case 4:
            if(board[1][0]==0)
            board[1][0] = 1;
            break;
        case 5:
            if(board[1][1]==0)
            board[1][1] = 1;
            break;
        case 6:
            if(board[1][2]==0)
            board[1][2] = 1;
            break;
        case 7:
            if(board[2][0]==0)
            board[2][0] = 1;
            break;
        case 8:
            if(board[2][1]==0)
            board[2][1] = 1;
            break;
        case 9:
            if(board[2][2]==0)
            board[2][2] = 1;
            break;
        default:
            printf("number between 1~9");
    }
        
}

//get input from player 2
void input2(int a)
{
    switch (a)
    {
        case 1:
            if(board[0][0] == 0)
                board[0][0] = 2;
            break;
        case 2:
            if(board[0][1] == 0)
                board[0][1] = 2;
            break;
        case 3:
            if(board[0][2] == 0)
            board[0][2] = 2;
            break;
        case 4:
            if(board[1][0]==0)
            board[1][0] = 2;
            break;
        case 5:
            if(board[1][1]==0)
            board[1][1] = 2;
            break;
        case 6:
            if(board[1][2]==0)
            board[1][2] = 2;
            break;
        case 7:
            if(board[2][0]==0)
            board[2][0] = 2;
            break;
        case 8:
            if(board[2][1]==0)
            board[2][1] = 2;
            break;
        case 9:
            if(board[2][2]==0)
            board[2][2] = 2;
            break;
        default:
            printf("number between 1~9");
    }
        
}

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
int promt1() //1
{
    int A;
    printf("player 1 ~");
    scanf("%i",&A);
    input1(A);
    return 0;
}

//promt player 2
int promt2() //2
{
    int A;
    printf("player 2 ~");
    scanf("%i",&A);
    input2(A);
    return 0;
}

//display board
void displayboard(int board[][column])
{
    printf("\n\n"); 
      
    printf("\t  %i | %i  | %i  \n", board[0][0], board[0][1], board[0][2]); 
    printf("\t--------------\n"); 
    printf("\t  %i | %i  | %i  \n", board[1][0], board[1][1], board[1][2]); 
    printf("\t--------------\n"); 
    printf("\t  %i | %i  | %i  \n\n", board[2][0], board[2][1], board[2][2]);
}

//check the winner
int check_winner()
{
    checkrow();
    checkcolumn();
    return 0;
}
