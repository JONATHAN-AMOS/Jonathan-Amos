#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'},
                    {'4', '5', '6'},
                    {'7', '8', '9'}};
int choice;
int player = 1;  // Player 1 starts first
char mark;       // X or O

// Function to display the Tic-Tac-Toe board
void displayBoard() {
    cout << "\nTic-Tac-Toe Board\n";
    cout << "Player 1 (X)  -  Player 2 (O)\n\n";
    cout << "     |     |     \n";
    cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << " \n";
    cout << "_____|_____|_____ \n";
    cout << "     |     |     \n";
    cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << " \n";
    cout << "_____|_____|_____ \n";
    cout << "     |     |     \n";
    cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << " \n";
    cout << "     |     |     \n";
}

// Function to mark a player's move
bool markMove(int player, int choice) {
    mark = (player == 1) ? 'X' : 'O';
    switch (choice) {
        case 1: if (board[0][0] == '1') { board[0][0] = mark; return true; } break;
        case 2: if (board[0][1] == '2') { board[0][1] = mark; return true; } break;
        case 3: if (board[0][2] == '3') { board[0][2] = mark; return true; } break;
        case 4: if (board[1][0] == '4') { board[1][0] = mark; return true; } break;
        case 5: if (board[1][1] == '5') { board[1][1] = mark; return true; } break;
        case 6: if (board[1][2] == '6') { board[1][2] = mark; return true; } break;
        case 7: if (board[2][0] == '7') { board[2][0] = mark; return true; } break;
        case 8: if (board[2][1] == '8') { board[2][1] = mark; return true; } break;
        case 9: if (board[2][2] == '9') { board[2][2] = mark; return true; } break;
    }
    return false;
}

// Function to check for a winner
bool checkWin() {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return true;
    }
    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return true;
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return true;

    return false;
}

// Function to check for a draw
bool checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    cout << "Welcome to Tic-Tac-Toe!" << endl;

    while (true) {
        displayBoard();
        cout << "Player " << player << ", it's your turn!" << endl;
        cout << "Enter a number (1-9) to mark your move: ";
        cin >> choice;

        // Validate the move
        if (!markMove(player, choice)) {
            cout << "Invalid move, try again!" << endl;
            continue;
        }

        // Check for a winner or draw
        if (checkWin()) {
            displayBoard();
            cout << "Player " << player << " wins!" << endl;
            break;
        }
        if (checkDraw()) {
            displayBoard();
            cout << "It's a draw!" << endl;
            break;
        }

        // Switch player turn
        player = (player == 1) ? 2 : 1;
    }

    return 0;
}
