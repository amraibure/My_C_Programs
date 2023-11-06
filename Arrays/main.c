#include <stdio.h>
int size = 8;

// Move a piece


int main() {
    char board[size][size];
    initBoard(board);
    displayBoard(board);

    return 0;
}

void displayBoard(char board[size][size]){
    for(int i = 0; i < size;i++){
        for(int j = 0; j < size;j++){
            printf("%c      ",board[i][j]);
        }
        printf("\n\n");
    }
}

void initBoard(char board[size][size]){
    for(int i = 0; i < size;i++){
        for(int j = 0; j < size;j++){
            if(i % 2 > 0){
                if(j % 2 > 0){
                    board[i][j] = '0';
                }else{
                    if(i <= 2){
                        board[i][j] = '*';
                    }else{
                        board[i][j] = '#';  
                    }
                }
            }else{
                if(j % 2 > 0){
                    if(i <= 2){
                        board[i][j] = '*';
                    }else{
                        board[i][j] = '#';  
                    }
                }else{
                    board[i][j] = '0';
                }
            }
            if(i == 3 || i == 4){
                board[i][j] = '0';
            }
        }
    }
}

void movePiece(char board[size][size]){
    for(int i = 0; i < size;i++){
        if(i == 3){
            board[i] = '0';
        }
        printf("%d\n", *);
        }   
    }
    
