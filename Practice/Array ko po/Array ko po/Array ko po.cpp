#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void arbell(int a);

void pogi(int b);

int main()
{

    //welcome
    cout << "Welcome to array ko po!\n" << endl;
    cout << "Arbell = Integer (3,5,7,12,15) \n" << "Pogi = Float (18.5,21.3,23.7) \n";
    cout << endl;



    //declaration
    int name;
    int number;


    cout << "Pick a name! \n";
    cout << "Enter 1 if Arbell \n";
    cout << "Enter 2 if Pogi \n";
    cout << "Input: ";
    cin >> name;
    if (name == 1) {
        cout << "Enter a number 0-4: ";
        cin >> number;
        arbell(number);
    }
    else if (name == 2) {
        cout << "Enter a number 0-2: ";
        cin >> number;
        pogi(number);
    }
    else {
        cout << "Enter valid input";
    }


    return 0;



}

void arbell(int a) {

    int arbell[5] = { 3,5,7,12,15 };


    for (int x = a; x <= 5; x++) {
        a = x;
        cout << "The value of you entered is " << arbell[x] << endl;
        break;
    }

}


void pogi(int b) {
    float pogi[3] = { 18.5,21.3,23.7 };

    for (int i = b; i < 3; i++) {
        b = i;
        cout << "The value of you entered is " << pogi[i] << endl;
        break;
    }
}
