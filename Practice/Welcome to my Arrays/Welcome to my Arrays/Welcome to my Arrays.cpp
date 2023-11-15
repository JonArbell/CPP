#include<iostream>
#include<io.h>
#include <vector>
using namespace std;

int main()
{

    //Welcome Intro
    cout << "Welcome to my Arrays! " << endl;
    cout << endl;

    int arraySize;

    //input number of elements
    cout << "Enter the number of numbers: ";
    cin >> arraySize;
    cout << " \n";

    vector<int> myArray(arraySize);

    cout << "Enter " << arraySize << " numbers \n";
    for (int i = 0; i < arraySize; i++) {
        cin >> myArray[i];
    }

    system("CLS");

    int total = 0;

    cout << "These are the number you Entered! \n";
    for (int x = 0; x < arraySize; x++) {
        cout << myArray[x] << endl;
    }
    cout << endl;


    cout << "Sum of all number you entered! \n";
    for (int x = 0; x < arraySize; x++) {

        total = total + myArray[x];

    }

    cout << total;



    return 0;

}
