#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
string playerNames[3] = { "", "", "" }; 
bool isCPUP1, isCPUP2;

int checkwin();
void board();

int main()
{
    int player = 1, i, choice;
    char mark;

    srand(time(0));

    cout << "Enter name for Player 1 (X): ";
    getline(cin, playerNames[1]);

    cout << "Is Player 2 (O) a CPU? (1 for Yes, 0 for No): ";
    cin >> isCPUP2;

    if (!isCPUP2)
    {
        cout << "Enter name for Player 2 (O): ";
        cin.ignore();
        getline(cin, playerNames[2]);
    }
    else
    {
        playerNames[2] = "CPU";
    }

    do
    {
        board();

        if ((player == 2 && !isCPUP2) || (player == 1 && isCPUP2))
        {
            cout << playerNames[player] << ", enter a number:  ";
            cin >> choice;
        }
        else
        {
            if (isCPUP2)
            {
                choice = rand() % 9 + 1;
                cout << playerNames[player] << " (CPU) chooses: " << choice << endl;
            }
            else
            {
                cout << playerNames[1] << ", enter a number:  ";
                cin >> choice;
            }
        }

        mark = (player == 1) ? 'X' : 'O';

        if (choice >= 1 && choice <= 9 && square[choice] == '0' + choice)
            square[choice] = mark;
        else
        {
            cout << "Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }

        i = checkwin();
        player = 3 - player;

    } while (i == -1);

    board();
    if (i == 1 && player==2)
        cout << "==>\a" << playerNames[1] << " wins!";
    else if (i == 1 && player == 1) 
        cout << "==>\a" << playerNames[2] << " wins!";
    else
        cout << "==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
        return 0;
    else
        return -1;
}

void board()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (" << playerNames[1] << ")  -  Player 2 (" << playerNames[2] << ")" << endl
        << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl
        << endl;
}
