#include <iostream>
#include <string>
using namespace std;


int main()
{

    string ansName[2] = { "Emilio Aguinaldo", "Naruto Shapaden" };
    int lives = 3;
    string ans3 = "oo";
    string answer;

    while (lives != 0) {
        cout << "Who was the first President of the Philippines?: ";
        getline(cin, answer);

        if (answer == ansName[0]) {
            cout << "Correct! Proceed to the next question." << endl;
            break;
        }
        else {
            lives--;
            cout << "Wrong!" << endl;
        }

    }

    while (lives != 0) {
        cout << "Who is the current Hokage?: ";
        getline(cin, answer);

        if (answer != ansName[1]) {
            cout << "Wrong!" << endl;
            lives--;
        }
        else {
            cout << "Correct! Proceed to the next question." << endl;
            break;
        }

    }

    while (lives != 0) {
        cout << "Pogi ba ako?: ";
        cin >> answer;

        if (answer != ans3) {
            cout << "Botoy mo naman." << endl;
        }
        else {
            cout << "Galing! Panis!";
            break;
        }

    }




    if (lives == 0) {
        cout << "Game Over!";
    }

    return 0;
}
