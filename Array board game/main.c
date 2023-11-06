#include <stdio.h>
int size = 8;
char p1 = 'A';
char p2 = 'B';
char sp1 = 'AA';
char sp2 = 'BB';
char empty = ' ';

// Move a piece

int main()
{
    char board[size][size];
    initBoard(board);
    displayBoard(board);
    int counter = 0;
    do
    {
        printf("\n\n");
        int played = userInput(board, counter);
        if(played){
            counter++;
        }
        
        printf("\n\n");
        displayBoard(board);
    } while (1);

    return 0;
}

void displayBoard(char board[size][size])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%c - [%d,%d]      ", board[i][j], i, j);
        }
        printf("\n\n\n");
    }
}

void initBoard(char board[size][size])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i % 2 > 0)
            {
                if (j % 2 > 0)
                {
                    board[i][j] = empty;
                }
                else
                {
                    if (i <= 2)
                    {
                        board[i][j] = p1;
                    }
                    else
                    {
                        board[i][j] = p2;
                    }
                }
            }
            else
            {
                if (j % 2 > 0)
                {
                    if (i <= 2)
                    {
                        board[i][j] = p1;
                    }
                    else
                    {
                        board[i][j] = p2;
                    }
                }
                else
                {
                    board[i][j] = empty;
                }
            }
            if (i == 3 || i == 4)
            {
                board[i][j] = empty;
            }
        }
    }
}

int userInput(char board[size][size], int counter)
{
    int pr;
    int pc;
    int dr;
    int dc;
    printf("Input Piece Row: ");
    scanf("%d", &pr);
    printf("Input Piece Column: ");
    scanf("%d", &pc);
    printf("Input Destination Row: ");
    scanf("%d", &dr);
    printf("Input Destination Column: ");
    scanf("%d", &dc);
    if (counter % 2 > 0)
    {
        if (board[pr][pc] == p1)
        {
            board[pr][pc] = empty;
            board[dr][dc] = p1;
        }
        else
        {
            printf("Invalid Move");
            return 0;
        }
    }
    else
    {
        if (board[pr][pc] == p2)
        {
            board[pr][pc] = empty;
            board[dr][dc] = p2;
        }
        else
        {
            printf("Invalid Move");
            return 0;
        }
    }
    return 1;
}

// void movePiece(char board[size][size],int pr,int pc,int dr,int dc){
//     board[pr][pc] = '0';
//     board[dr][dc] = '#';
// }