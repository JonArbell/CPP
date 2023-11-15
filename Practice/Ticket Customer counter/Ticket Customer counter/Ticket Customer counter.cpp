#include <iostream>
#include <string>
#include <windows.h>

using namespace std;




int main()
{

    int numOftix = 0;
    int totalpay = 0;
    int totalOfpayer = 0;
    string name;
    long availTix = 5000;

    while (availTix > 0) {

            cout << "Enter name: ";
            getline(cin, name);

            cout << "Number of Tickets: ";
            cin >> numOftix;
            cin.ignore();
            if (availTix >= numOftix) {
                totalOfpayer++;
                availTix -= numOftix;
                totalpay = totalpay + numOftix;
                cout << "Available tickets: " << availTix << endl;
            }
            else {
                cout << "Only " << availTix << " ticket/s available." << endl;
                continue;
            }          
    }
    
    cout << "Total number of Payers: " << totalOfpayer << endl;

    return 0;
}
