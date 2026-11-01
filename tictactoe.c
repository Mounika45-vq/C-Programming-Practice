
#include <stdio.h>

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

void displayBoard()
{
    int i, j;

    printf("\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf(" %c ", board[i][j]);

            if(j < 2)
                printf("|");
        }

        printf("\n");

        if(i < 2)
            printf("---+---+---\n");
    }
}

int checkWinner()
{
    int i;

    for(i = 0; i < 3; i++)
    {
        if(board[i][0] == board[i][1] &&
           board[i][1] == board[i][2])
            return 1;

        if(board[0][i] == board[1][i] &&
           board[1][i] == board[2][i])
            return 1;
    }

    if(board[0][0] == board[1][1] &&
       board[1][1] == board[2][2])
        return 1;

    if(board[0][2] == board[1][1] &&
       board[1][1] == board[2][0])
        return 1;

    return 0;
}

int main()
{
    int choice, moves = 0;
    char player = 'X';

    while(moves < 9)
    {
        displayBoard();

        printf("\nPlayer %c, enter position (1-9): ", player);
        scanf("%d", &choice);

        if(choice < 1 || choice > 9 ||
           board[(choice - 1) / 3][(choice - 1) % 3] == 'X' ||
           board[(choice - 1) / 3][(choice - 1) % 3] == 'O')
        {
            printf("Invalid position! Try again.\n");
            continue;
        }

        board[(choice - 1) / 3][(choice - 1) % 3] = player;
        moves++;

        if(checkWinner())
        {
            displayBoard();
            printf("\nPlayer %c wins!\n", player);
            return 0;
        }

        if(player == 'X')
            player = 'O';
        else
            player = 'X';
    }

    displayBoard();
    printf("\nGame Draw!\n");

    return 0;
}
